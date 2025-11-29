@class AWELocoalGifCreaterContext, NSString;

@interface AWELocoalGifCreater_GroupGreeting : AWELocoalGifBaseCreater <AWELocoalGifMessageCreatable>

@property (readonly, nonatomic) AWELocoalGifCreaterContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentAlreadyShowGroupGreetingMsg;
- (BOOL)canCreateWithIgnoreUser:(BOOL)a0;
- (void)createMessageWithCompletion:(id /* block */)a0;

@end
