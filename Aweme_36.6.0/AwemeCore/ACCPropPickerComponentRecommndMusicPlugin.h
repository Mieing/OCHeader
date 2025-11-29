@class NSString, NSNumber;
@protocol ACCPropPickerService, ACCRecordFlowService, IESServiceProvider, ACCFeatureComponent, ACCRecordPropService;

@interface ACCPropPickerComponentRecommndMusicPlugin : NSObject <ACCStickerPickerServiceSubscriber, ACCRecordPropServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCPropPickerService> propPickService;
@property (copy, nonatomic) NSString *lastPickPropID;
@property (copy, nonatomic) NSString *currentRequestPropID;
@property (retain, nonatomic) NSNumber *bindMusicStartLoadTime;
@property (nonatomic) BOOL hitCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (id)hostComponent;
- (void)bindServices:(id)a0;
- (void)stickerPickerServiceHandlePickSticker:(id)a0;
- (void)bindToComponent:(id)a0;
- (void)fetchPropRecommendMusicListIfNeedWithProp:(id)a0;
- (void)trackPropWeakBindMusicLoadFinished;
- (void).cxx_destruct;

@end
