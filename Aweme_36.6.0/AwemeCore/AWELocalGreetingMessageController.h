@class AWEIMMessage, AWEIMMessageBaseViewController;

@interface AWELocalGreetingMessageController : NSObject

@property (nonatomic) BOOL didAddLocalGreet;
@property (retain, nonatomic) AWEIMMessage *message;
@property (weak, nonatomic) AWEIMMessageBaseViewController *vcParent;

- (void)deleteCurrentStrangerTopCardMessage;
- (void)tryAddLocalTopUserLabelGreetingMessageFor:(id)a0;
- (void)tryAddLocalStrangerConTopAvatarFor:(id)a0;
- (void).cxx_destruct;

@end
