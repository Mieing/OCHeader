@class AWESearchAnchorListModel, NSString, AWESearchAnchorModel, AWEPageContext, NSTimer, AWEAwemeModel, AWERelatedRecomendListDataController, UIImageView, UITapGestureRecognizer, NSAttributedString, AWEHotSpotListModel, UILabel;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionTextLinkJumpManagerProtocol;

@interface AWECommentVCHeaderBarView : UIView

@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) AWESearchAnchorModel *searchAnchorModel;
@property (retain, nonatomic) AWESearchAnchorListModel *anchorListModel;
@property (retain, nonatomic) AWEHotSpotListModel *hotSpotListModel;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWERelatedRecomendListDataController *dataController;
@property (retain, nonatomic) NSTimer *clearPreloadTimer;
@property (retain, nonatomic) id<AWEPlayInteractionTextLinkJumpManagerProtocol> jumpXiguaManager;
@property (nonatomic) unsigned long long barType;
@property (nonatomic) unsigned long long enterSource;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *hotSearchRightDesLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) NSAttributedString *attrTips;
@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) BOOL isFromMaskVC;
@property (nonatomic) BOOL isFromVideoDescriptionPanel;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)trackRelatedSearchClickIfNeeded;
- (long long)viewTypeForString:(id)a0 model:(id)a1;
- (void)updateWithModel:(id)a0 barType:(unsigned long long)a1 referString:(id)a2 enterSource:(unsigned long long)a3;
- (void)updateUIInMaskVCIfNeeded;
- (void)updateUIInVideoDescriptionPanelIfNeeded;
- (void)updateBarViewWithBarType:(unsigned long long)a0;
- (void)trackBottomBarEventByShow:(BOOL)a0;
- (void)setImageViewWithBarType:(unsigned long long)a0;
- (void)setAttrTipsWithBarType:(unsigned long long)a0;
- (void)xiguaUpdateIcon;
- (void)toutiaoUpdateIcon;
- (id)trackMediumPlayListParams;
- (void)trackVideoBottomBarClick:(id)a0 referString:(id)a1;
- (void)loadDataController;
- (void)updateArrowIconSize;
- (void)configClearTimer;
- (void)cancelClearTimer;
- (void)trackRelatedRecommendBarClick;
- (void)addTapGesture;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)init;
- (void)timerHandler;
- (void)tapped;
- (void)setupSubviews;

@end
