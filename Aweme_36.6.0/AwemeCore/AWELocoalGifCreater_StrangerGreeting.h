@class AWELocoalGifCreaterContext, NSString;

@interface AWELocoalGifCreater_StrangerGreeting : AWELocoalGifBaseCreater <AWELocoalGifMessageCreatable>

@property (readonly, nonatomic) AWELocoalGifCreaterContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canGreetingCoexistWithMessage:(id)a0;

@end
