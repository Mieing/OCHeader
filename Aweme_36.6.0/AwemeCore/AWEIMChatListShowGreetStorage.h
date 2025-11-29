@class NSMutableSet;

@interface AWEIMChatListShowGreetStorage : NSObject

@property (retain, nonatomic) NSMutableSet *showGreetSession;

+ (id)sharedInstance;

- (void)setSessionEnableShowGreet:(BOOL)a0 sessionId:(id)a1;
- (BOOL)isSessionEnableShowGreet:(id)a0;
- (void).cxx_destruct;

@end
