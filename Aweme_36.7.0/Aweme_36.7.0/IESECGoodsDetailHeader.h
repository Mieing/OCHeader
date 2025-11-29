@class NSString, IESECGoodsDetailMainHeader, IESECGoodsDetailParameters, IESECGoodsDetailContentProvider, IESECGoodsDetailTracker, IESECGoodsDetailNextHeader;

@interface IESECGoodsDetailHeader : UIView <IESECGoodsDetailViewUpdateMessage, IESECGoodsDetailContainerHeaderProtocol, IESECGoodsDetailParametersProtocol>

@property (retain, nonatomic) IESECGoodsDetailContentProvider *contentProvider;
@property (retain, nonatomic) IESECGoodsDetailTracker *tracker;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) IESECGoodsDetailMainHeader *mainHeaderView;
@property (retain, nonatomic) IESECGoodsDetailNextHeader *nextHeaderView;
@property double nextAlpha;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (readonly, nonatomic) BOOL customizedShareButtonShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double headerTabTransparency;
@property (nonatomic) double headerShareButtonShowPercent;
@property (nonatomic) double headerTransparency;
@property (nonatomic) double headerContainerAlpha;
@property (readonly, nonatomic) BOOL transitionHeaderShow;

- (void)setCommentTitle:(id)a0;
- (void)initializeWithParameters:(id)a0;
- (void)setCommentSKUTitle:(id)a0;
- (void)searchHotWordsDidUpdateWithGoodsDetailUID:(id)a0;
- (void)updateHeadTabsCount;
- (void)goodsDetailSetHeaderViewBackground:(id)a0 goodsDetailUID:(id)a1;
- (void)goodsDetailHeaderShowReportButton:(BOOL)a0 goodsDetailUID:(id)a1;
- (void)setCommentTitle:(id)a0 withSubArrow:(BOOL)a1;
- (void)updateTransitionHeaderWithFinalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shadowShowAlpha:(double)a1;
- (void)updateCollectButtonStatus;
- (void)setupCommentHeaderBackground:(id)a0;
- (id)initWithContentProvider:(id)a0 tracker:(id)a1;
- (void)setupHeaderBackground:(id)a0;
- (void)trackTrendingWordsShow;
- (void)updateSelectedIndexTabWithIndex:(unsigned long long)a0;
- (void)updateHeaderTabsWithParameters:(id)a0 needExpandGoodsDetail:(BOOL)a1;
- (void).cxx_destruct;
- (double)height;
- (void)updateContent;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)setupUI;

@end
