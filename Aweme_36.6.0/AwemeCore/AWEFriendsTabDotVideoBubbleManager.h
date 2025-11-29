@class AFDFrequencyRuleGroup, NSString;

@interface AWEFriendsTabDotVideoBubbleManager : NSObject <AWEFriendsTabDotVideoBubbleManagerProtocol>

@property (retain, nonatomic) AFDFrequencyRuleGroup *frequencyRuleGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)lastShowTime;
- (id)lastClickTime;
- (void)clickBubble;
- (void)showBubble;
- (BOOL)enableShowBubble;
- (void).cxx_destruct;

@end
