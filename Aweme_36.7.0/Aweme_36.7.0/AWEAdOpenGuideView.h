@class AWEAwemeModel, NSString, UIView, AWEButton, UIImageView, UIButton, UIVisualEffectView, UILabel;

@interface AWEAdOpenGuideView : UIView <BDATMAutoTrackerViewProtocol, AWEAdOpenGuideView>

@property (nonatomic) BOOL isShowBottomAdBarNewStyle;
@property (retain, nonatomic) UILabel *describeLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *accessibilityBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEButton *openButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)closeBtnClicked:(id)a0;
- (void)openClickAutoTracker;
- (void)openShowAutoTracker;
- (id)getComponentInfo;
- (void)openLearnMoreBtnClicked:(id)a0;
- (BOOL)isFromSearchResult;
- (void)updateNameAndAvatar:(id)a0;
- (void)updateBottomAdBarWithNewStyle;
- (void)addDynamicBlurEffect:(unsigned long long)a0;
- (void)bottomBarClick:(id)a0;
- (id)defaultLabelText;
- (void)presentLandingPageController;
- (void).cxx_destruct;
- (double)headerViewHeight;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)setupUI;

@end
