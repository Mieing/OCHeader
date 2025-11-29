@class IESECWinVideoObject, NSString, IESECServiceProxy, IESECWinContext, UIViewController;
@protocol IESECWinLiveService, IESECWinDataService, IESECSKUViewControllerProtocol, IESECGoodsDetailPopoverContentProtocol, IESECWinGoodsService;

@interface IESECWinVideoSectionController : IGListSectionController <IESECWinVideoCellProtocol, IESECWinContextProtocol, IESECGoodsDetailContainerProtocol> {
    IESECWinVideoObject *_object;
    IESECWinContext *_context;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataServiceProxy;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveServiceProxy;
@property (nonatomic) BOOL tapOnceLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol> *skuVC;
@property (nonatomic) BOOL shouldDetachLiveFloatOnTopToNextPage;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)paramsForEventTracking;
- (void)jumpToGoodsDetailWithGoodsModel:(id)a0;
- (id)commonTrackParamsForBST;
- (void)jumpToGoodsDetailBySchemaWithGoodsModel:(id)a0 btmInfo:(id)a1;
- (void)didTappedGoodsPhotoView;
- (void)trackWithEventName:(id)a0 trackParams:(id)a1 once:(id)a2 jump:(BOOL)a3 host:(id)a4 isGoodsPhoto:(BOOL)a5 index:(long long)a6;
- (void)videoCellTapped;
- (void)trackClickVideoCellWithClickType:(id)a0;
- (void)openReplayViewControllerWithIndex:(long long)a0;
- (void)openVideoViewControllerWithIndex:(long long)a0;
- (id)getBtmBaseIdWithIsGoodsPhoto:(BOOL)a0 index:(long long)a1;
- (id)getVideoIDsFromVideoTabWithIndex:(long long)a0 range:(long long)a1;
- (id)getVideoIDsFromTabCardList:(id)a0 index:(long long)a1 range:(long long)a2;
- (id)getBtmIDWithHost:(id)a0 isGoodsPhoto:(BOOL)a1 index:(long long)a2;
- (id)videoPhotoViewProductTrackParams;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
