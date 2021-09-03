from my_extension import print_message
from example_pb2 import MyMessage 

def main():
  my_message = MyMessage(my_int = 3, my_string = "hello")
  print_message(my_message)


if __name__ == "__main__":
  main()
