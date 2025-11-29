@interface AWEIMStrangerChatListUtil : NSObject

+ (void)showDoubleCheckForDeleteChat:(id)a0 enterMethod:(id)a1 enterFrom:(id)a2 completionHandler:(id /* block */)a3;
+ (void)blockChat:(id)a0 enterMethod:(id)a1 reportEnterFrom:(id)a2;
+ (void)reportUserWithChat:(id)a0 enterMethod:(id)a1 isFromBlockAuth:(BOOL)a2 reportEnterFrom:(id)a3;

@end
