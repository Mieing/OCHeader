@class NSString, AWEPaymentEventHandler;
@protocol AWEEntertainmentVideoTrialDelegate;

@interface AWEPlayInteractionEntertainmentBaseMaskPresenter : AWEEntertainmentBaseVideoTrialPresenter <AWEPlayInteractionEntertainmentMaskPresenterProtocol>

@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) AWEPaymentEventHandler *eventHandler;
@property (weak, nonatomic) id<AWEEntertainmentVideoTrialDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 context:(id)a1;
- (id)createAnnieXCardConfig;
- (id)productTitle;
- (id)getSchemaParams;
- (BOOL)disableVideoRepeat;
- (id)getCoverImageURLArray;
- (BOOL)shouldUsePreviewMask;
- (BOOL)shouldHiddenEffectMaskContainer;
- (BOOL)shouldRemovePreviewMask;
- (BOOL)shouldOffsetMask;
- (BOOL)shouldShowMaskInTrial;
- (BOOL)shouldHideMaskWhenReplayTrial;
- (double)loadMaskDelayTime;
- (void)cardDidFinishLoad;
- (id)dataInjSceneID;
- (id)dataInjBusinessID;
- (void).cxx_destruct;
- (void)reset;
- (id)getCacheData;
- (id)cardIdentifier;
- (BOOL)shouldPreload;

@end
