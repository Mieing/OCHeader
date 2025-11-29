@class IESLLGoodsDetailMainInfoComponentView, NSMutableDictionary, IESLLGoodsDetailMainInfoModel, CADisplayLink, NSString;

@interface IESLLGoodsDetailMainInfoComponentViewModel : LLDitoComponentViewModel <IESLLGDImageHeightChangeDelegate, IESLLGDImageItemClickProtocol, IESLLGDImagePointClickProtocol>

@property (retain, nonatomic) NSMutableDictionary *reportedMaps;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double currentHeight;
@property (nonatomic) double preHeight;
@property (nonatomic) BOOL isFullScreen;
@property (retain, nonatomic) IESLLGoodsDetailMainInfoModel *componentModel;
@property (weak, nonatomic) IESLLGoodsDetailMainInfoComponentView *cell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDisplayLink;
- (void)registerEvent;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)componentViewDidCompleteShow;
- (void)componentViewWillShow;
- (void)didImageHeightChangeTarget:(double)a0;
- (void)didClickItem:(long long)a0;
- (void)didClickPointItem:(id)a0;
- (void)mobPicShow:(long long)a0 lastIndex:(long long)a1 type:(id)a2;
- (void)changeAtmosphereWithCurrentIndex:(long long)a0;
- (void)trackEvent:(id)a0 extraParams:(id)a1 onlyTrackOnce:(BOOL)a2 uniqueID:(id)a3;
- (void)checkHeightChanges;
- (void)trackPointClick:(id)a0;
- (BOOL)isHttpURL:(id)a0;
- (void)trackClickPicEvent:(long long)a0;
- (void)openCommentPictureComponent:(id)a0;
- (void)openPreviewImageDetailPage:(id)a0 position:(long long)a1 uniqueId:(id)a2;
- (void)previewImageWithBuyButton:(id)a0 position:(long long)a1 currentTabKey:(id)a2 currentTabIndex:(long long)a3 uniqueId:(id)a4;
- (void)jumpToFeedVideo:(id)a0 videoAction:(id)a1;
- (void)doPreviewImage:(id)a0 position:(long long)a1 uniqueId:(id)a2;
- (BOOL)isReportedEvent:(id)a0;
- (void)reportedEvent:(id)a0;
- (void)trackSlidePicEvent:(long long)a0;
- (void)trackSlideTabEvent:(long long)a0 type:(id)a1;
- (void)trackShowPicEvent:(long long)a0;
- (void)trackShowTabEvent:(long long)a0;
- (void)trackFirstPicAndTabEvent;
- (void)trackSuperDiscountPointShow;
- (void)updateHalfScreenStateWithOffsetY:(double)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)dealloc;
- (void)stopDisplayLink;

@end
