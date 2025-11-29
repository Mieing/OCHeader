@class IESECLiveContext, NSArray, NSString, IESECLiveCardViewModelV2, IESECLiveSliceCardView, IESECLiveTracker;
@protocol IESECLiveCardViewDelegate, IESECLiveSliceCardActionDelegate;

@interface IESECLiveCardSliceAction : NSObject <IESECLiveCardSliceCustomizedActionDelegate>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) IESECLiveCardViewModelV2 *cardViewModel;
@property (weak, nonatomic) IESECLiveSliceCardView *cardView;
@property (retain, nonatomic) NSArray *customizedActions;
@property (weak, nonatomic) id<IESECLiveCardViewDelegate> cardViewDelegate;
@property (weak, nonatomic) id<IESECLiveSliceCardActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sourceVC;
- (BOOL)isCurrentLandscape;
- (struct CGSize { double x0; double x1; })maskSize;
- (id)createCustomizedActions;
- (void)setClickActionWithEvent:(id)a0;
- (void)setTrackActionWithEvent:(id)a0;
- (void)setCloseActionWithEvent:(id)a0;
- (void)setExposureActionWithEvent:(id)a0;
- (void)setCustomizedActionWithEvent:(id)a0;
- (id)createClickGoodsModelWithEvent:(id)a0;
- (void)forceLoginWithClickCompletion:(id /* block */)a0;
- (id)cardEnvironment;
- (id)skuCreateInfoWithEcomEntranceForm:(id)a0 sourceBTMToken:(id)a1;
- (void)trackBSTClickEventWithEventName:(id)a0 bstDict:(id)a1 btmDict:(id)a2 goodsBaseModel:(id)a3 trackParams:(id)a4;
- (void)trackBSTShowEventWithEventName:(id)a0 bstDict:(id)a1 btmDict:(id)a2 goodsBaseModel:(id)a3 trackParams:(id)a4;
- (void)trackNormalEventWithEventName:(id)a0 btmDict:(id)a1 goodsBaseModel:(id)a2 trackParams:(id)a3 needMergeEventParams:(BOOL)a4;
- (id)trackParamsWithParams:(id)a0;
- (id)initWithLiveContext:(id)a0 sliceCardView:(id)a1;
- (long long)liveCardShowStatus;
- (id)panelEnvironment;
- (id)getCardViewModel;
- (void)bindSliceCardWithCustomizedAction:(id)a0;
- (void)bindSliceActionWithSliceView:(id)a0;
- (struct CGSize { double x0; double x1; })panelSize;
- (void).cxx_destruct;
- (id)roomContext;

@end
