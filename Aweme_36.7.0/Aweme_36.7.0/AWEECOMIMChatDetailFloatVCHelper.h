@class AWEECOMIMChatDetailViewController;

@interface AWEECOMIMChatDetailFloatVCHelper : NSObject

@property (weak, nonatomic) AWEECOMIMChatDetailViewController *floatVC;

- (id)initWithFloatVC:(id)a0;
- (void)refreshUIWithIsExpand:(BOOL)a0;
- (void)updateBarTitle;
- (void)trackClickFull;
- (void)trackClickClose;
- (void)trackClickBtnWithName:(id)a0;
- (void).cxx_destruct;

@end
