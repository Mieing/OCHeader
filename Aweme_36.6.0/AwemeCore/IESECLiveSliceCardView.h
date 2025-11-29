@class NSMutableDictionary, IESECLiveCardSliceAction, NSString, IESECLiveTracker;
@protocol IESECLiveSliceViewWrapper;

@interface IESECLiveSliceCardView : IESECLiveBaseCardView <IESECLiveSliceCardActionDelegate>

@property (retain, nonatomic) id<IESECLiveSliceViewWrapper> sliceWrapper;
@property (retain, nonatomic) IESECLiveCardSliceAction *sliceAction;
@property (retain, nonatomic) NSMutableDictionary *uiData;
@property (retain, nonatomic) NSMutableDictionary *uiUnRefreshableData;
@property (retain, nonatomic) NSString *sliceUITemplate;
@property (retain, nonatomic) IESECLiveTracker *tracker;
@property (nonatomic) double fontScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sourceVC;
- (void)closeCard;
- (id)initWithLiveContext:(id)a0;
- (void)showWithAnimation:(BOOL)a0 followUp:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateWithCardViewModel:(id)a0;
- (void)getCardWithCardViewModel:(id)a0 completion:(id /* block */)a1;
- (void)bindSliceCardByCurrentModel;
- (id)getCardViewModel;
- (void)updateCardDataIncrementallyWithDataDict:(id)a0;
- (id)p_cardEnvironment;
- (id)updateSliceWithViewModel:(id)a0;
- (BOOL)sliceTemplateURL:(id)a0 equalToTemplateURL:(id)a1;
- (void)updateSliceCardWithData:(id)a0;
- (id)appendSliceInitialParamWithViewModel:(id)a0;
- (id)generateClientUpdateParams:(id)a0;
- (void)trackNAEvent;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })cardSize;
- (id)cardID;

@end
