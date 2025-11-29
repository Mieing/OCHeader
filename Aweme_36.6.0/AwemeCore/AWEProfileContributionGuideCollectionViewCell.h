@class UIView, NSString, UIImageView, UIButton, NSDictionary, AWEProfileArrowBorderView, UIViewController, AWEUserProfileSpecificationPostContributionGuideTipModel, UILabel;

@interface AWEProfileContributionGuideCollectionViewCell : UICollectionViewCell <DUXActionSheetDelegate, AWEPublishTaskMessage>

@property (weak, nonatomic) AWEUserProfileSpecificationPostContributionGuideTipModel *tipModel;
@property (nonatomic) long long showType;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *backgroundColorView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *hotJumpArea;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) AWEProfileArrowBorderView *arrowBorderView;
@property (retain, nonatomic) NSString *selectedItemJumpUrl;
@property (nonatomic) BOOL refreshDataFlag;
@property (nonatomic) BOOL hitExitOptimizeRefresh;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ reloadDataBlock;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)showTypeWith:(BOOL)a0 postEmpty:(BOOL)a1 showTaskCard:(BOOL)a2;
+ (id)identifier;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (id)configWith:(long long)a0;
- (void)didActionSheetDismiss:(id)a0;
- (void)themeDidChangeNoti:(id)a0;
- (id)iconImageUrlArray;
- (void)reloadIconAndButtonIfHitExitOptimize;
- (BOOL)shouldEnableRichTextSubtitle;
- (void)configOptTipUIWithShowType:(long long)a0;
- (void)configTipUIWithShowType:(long long)a0;
- (void)configCellUIWithShowType:(long long)a0;
- (void)configEmptyUIWithShowType:(long long)a0;
- (void)configHeaderTipUIWithShowType:(long long)a0;
- (id)getTrackerInfoWithSchema:(id)a0;
- (void)configGontributionGuideTipsExposureLogicWith:(id)a0 eventParams:(id)a1;
- (void)preloadResourceIfNeeded;
- (void)generalPostDidShow;
- (id)buttonTitleLabelBigFont;
- (void)configUIStyle:(long long)a0;
- (double)actionButtonHeight;
- (BOOL)enableCenterLayoutOpt;
- (double)actionButtonTitleWidth;
- (id)buttonTitleLabelEmptyFont;
- (id)buttonTitleLabelNormalFont;
- (BOOL)enableTapThrottle;
- (id)configTrackerInfoWithSchema:(id)a0 publishGuideTip:(id)a1;
- (void)openJumpURL:(id)a0 position:(id)a1;
- (void)actionWithPosition:(id)a0 schema:(id)a1;
- (id)parseToMutableDict:(id)a0;
- (void)clickedActionBtn;
- (void)clickedHotJumpArea;
- (void)configHeaderTipWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldShowArrow:(BOOL)a1 arrowOffset:(double)a2 type:(long long)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupSubviews;
- (void)actionButtonTapped;
- (void)closeButtonTapped;

@end
