@class AWEUGCTopicInnerFlowContext, BDXBridgeEventSubscriber, UIImageView, AWESearchFavoriteImageView, UILabel, AWEAwemeModel, NSObject;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWESearchTopicPublishBottomView : UIView

@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UILabel *leftDescLabel;
@property (retain, nonatomic) UILabel *rightCollectionBtnText;
@property (retain, nonatomic) UIImageView *rightCollectionBtn;
@property (retain, nonatomic) UIImageView *rightPublishBtn;
@property (retain, nonatomic) UIImageView *publishIcon;
@property (retain, nonatomic) UILabel *rightPublishBtnText;
@property (retain, nonatomic) AWESearchFavoriteImageView *rightCollectionStarImg;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *barContext;
@property (retain, nonatomic) AWEUGCTopicInnerFlowContext *context;
@property (retain, nonatomic) BDXBridgeEventSubscriber *topicFavoriteStateSubscriber;

+ (double)viewHeight;

- (void)configureUI;
- (void)registerListeners;
- (void)unregisterListensers;
- (void)configureUITypeWithTitle;
- (void)onBindContext;
- (id)paramContext;
- (id)rightPublishBtnTitleString;
- (void)onRightCollectionButtonClicked;
- (void)onRightPublishButtonClicked;
- (void)bindContext:(id)a0 andAwemeModel:(id)a1 withBarContext:(id)a2;
- (void)onCellWillDisplay;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
