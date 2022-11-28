import requests

def shorten_link(full_link,link_name):
    API_KEY = '31c936800275bea2754c1c4af370035e1cf04'
    BASE_URl = ' https://cutt.ly/api/api.php'

    payload = {'key': API_KEY, 'short': full_link, 'name': link_name}
    request = requests.get(BASE_URl, params = payload)
    data = requests.json()
     
    print(data)

shorten_link('https://www.hackerrank.com/domains/python?filters%5Bsubdomains%5D%5B%5D=py-introduction','code')
