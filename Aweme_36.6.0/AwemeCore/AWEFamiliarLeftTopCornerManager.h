@class AWEFriendsYellowDotBubbleView, UIView;

@interface AWEFamiliarLeftTopCornerManager : NSObject

@property (retain, nonatomic) AWEFriendsYellowDotBubbleView *yellowDotBubble;
@property (retain, nonatomic) UIView *yellowDotView;
@property (retain, nonatomic) UIView *yellowDotSourceView;
@property (nonatomic) long long familiarExtensionFunType;
@property (nonatomic) long long familiarExtensionTypeFromAB;
@property (nonatomic) long long familiarExtensionYellowType;
@property (nonatomic) BOOL isYellowBubbleShowing;
@property (copy, nonatomic) id /* block */ verifyCompletionBlock;

+ (id)sharedInstance;

- (void)handleDismissBubble:(id)a0;
- (void)prepareForFamiliarExtension;
- (void)showFamiliarLeftTopCornerBubbleInSourceView:(id)a0 yellowDotView:(id)a1;
- (BOOL)enableFamiliarExtension;
- (void)dismissYellowBubble;
- (long long)getExtensionYellowType;
- (void)dismissYellowDot;
- (long long)getExtensionFunType;
- (id)getFamiliarExtensionItemType;
- (void)bubbleViewAppearAnimation:(id)a0;
- (void)bubbleViewDisappearAnimation;
- (long long)getEnableFamiliarExtensionsConfigAB;
- (void)updateFamiliarExtensionStorage;
- (void)requestExtensionCellIcon;
- (void)setupFamiliarExtensionConfigType;
- (void)setupAutoDismissTimer;
- (void).cxx_destruct;

@end
