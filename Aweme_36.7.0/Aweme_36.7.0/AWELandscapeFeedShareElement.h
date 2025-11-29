@class UIButton, DUXPopover;

@interface AWELandscapeFeedShareElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) UIButton *feedShareButton;
@property (retain, nonatomic) DUXPopover *popover;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)showInviteWatchToolTip;
- (void)showFeedSharePopoverGuide;
- (void)handleClickFeedShare;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
