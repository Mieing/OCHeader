@class NSMutableDictionary, NSString, IESEffectModel, AWEOriginStickerUserVerticalView, AWEOriginStickerUserView;
@protocol ACCRecordSidebarService;

@interface AWEStickerApplySourceOriginalHandler : AWEStickerApplyBaseHandler <ACCRecordPropServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) IESEffectModel *selectedSticker;
@property (retain, nonatomic) IESEffectModel *readyToShowSticker;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) NSMutableDictionary *cachedUserNameDict;
@property (retain, nonatomic) AWEOriginStickerUserView *originStickerUserView;
@property (retain, nonatomic) AWEOriginStickerUserVerticalView *originStickerUserVerticalView;
@property (nonatomic) BOOL panelShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)propServiceDidShowPanel:(id)a0;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)handlerDidBecomeActive;
- (void)didChangeLayoutManager:(id)a0;
- (void)handleStickerOriginalShow:(id)a0;
- (void)showSourceOrignalViewWithUserModel:(id)a0 effectModel:(id)a1;
- (void)p_updatePropCreatorWithUserModel:(id)a0;
- (void)p_hidePropCreatorBarItem;
- (void).cxx_destruct;

@end
