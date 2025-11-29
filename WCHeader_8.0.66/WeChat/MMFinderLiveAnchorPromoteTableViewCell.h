@class WCFinderAnimationLoadingView, MMFinderLiveAnchorPromoteInfo, UIView, MMUIButton;

@interface MMFinderLiveAnchorPromoteTableViewCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) UIView *contentBackView;
@property (retain, nonatomic) MMUIButton *pushButton;
@property (retain, nonatomic) MMUIButton *cancelPushButton;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (readonly, nonatomic) MMFinderLiveAnchorPromoteInfo *promoteInfo;
@property (nonatomic) BOOL alwaysHidePushButton;
@property (nonatomic) BOOL enablePushPromote;
@property (nonatomic) BOOL isLiving;
@property (copy, nonatomic) id /* block */ sendPromoteCallback;
@property (copy, nonatomic) id /* block */ cancelPromoteCallback;
@property (nonatomic) BOOL editHidePushButton;

+ (double)preferHeight;
+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (BOOL)enableMenuAction;
- (void)configEditMenuButtons;
- (void)updateHidePushButtonState:(BOOL)a0;
- (void)layoutUI;
- (void)layoutLoadingView;
- (void)createLoadingView;
- (void)layoutContentBackView;
- (void)layoutPushButton;
- (void)updatePushButtonStyle;
- (double)rightWidgetLeft;
- (id)getAdaptedColorForPromoteState:(id)a0;
- (void)onPushPromoteAction;
- (void)updatePromoteInfo:(id)a0;
- (void).cxx_destruct;

@end
