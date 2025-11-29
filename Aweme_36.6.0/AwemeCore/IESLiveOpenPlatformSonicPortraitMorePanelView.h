@class UIView, NSString, UIImageView, UIButton, IESLiveImageLabelButton, UICollectionView, IESLiveGameOpenPlatformMorePanelCollectionViewModel, UILabel;
@protocol IESLiveOpenPlatformSonicMorePanelViewDelegate;

@interface IESLiveOpenPlatformSonicPortraitMorePanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, IESLiveOpenPlatformSonicMorePanelViewService>

@property (retain, nonatomic) UICollectionView *morePanelCollectionView;
@property (retain, nonatomic) UIImageView *morePanelHeaderImageView;
@property (retain, nonatomic) UILabel *morePanelHeaderLabel;
@property (retain, nonatomic) UIImageView *morePanelHeaderArrowView;
@property (retain, nonatomic) UIView *morePanelHeaderView;
@property (nonatomic) BOOL shouldShowGameRuleDetail;
@property (retain, nonatomic) UIView *gameRuleDetailView;
@property (retain, nonatomic) UILabel *ruleLabel;
@property (retain, nonatomic) UILabel *gameRuleDetailLabel;
@property (nonatomic) BOOL shouldShowClearScreen;
@property (retain, nonatomic) UIView *clearScreenBGView;
@property (retain, nonatomic) IESLiveImageLabelButton *clearScreenButton;
@property (retain, nonatomic) UILabel *clearScreenSubLabel;
@property (retain, nonatomic) IESLiveGameOpenPlatformMorePanelCollectionViewModel *collectionViewCellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *morePanelAlertview;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *withdrawView;
@property (copy, nonatomic) NSString *gameRuleDetail;
@property (copy, nonatomic) NSString *exitBtnText;
@property (weak, nonatomic) id<IESLiveOpenPlatformSonicMorePanelViewDelegate> delegate;
@property (retain, nonatomic) UIButton *withDrawButton;
@property (nonatomic) BOOL isShowing;

+ (double)morePanelViewHeight;

- (id)attachingDIContext;
- (void)setupObserver;
- (void)clickButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 gameModel:(id)a1 diContext:(id)a2;
- (void)updateWithMorePanelTitle:(id)a0 imageUrl:(id)a1;
- (void)handlePanelDidShow;
- (void)updateClearScreenStateOpen:(BOOL)a0;
- (void)clickOpenDetails;
- (void)createClearSceenView;
- (void)createGameRuleDetailView;
- (void)createExitButton;
- (void)clickClearScreen;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (void)reloadDataSource;

@end
