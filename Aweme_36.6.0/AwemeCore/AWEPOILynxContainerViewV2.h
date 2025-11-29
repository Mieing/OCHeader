@class DitoLynxComponentViewModelV2, DitoPageContext, NSString, NSNumber;

@interface AWEPOILynxContainerViewV2 : AWEPOILynxContainerView <DitoLynxContainerProtocol>

@property (weak, nonatomic) DitoLynxComponentViewModelV2 *lynxViewModel;
@property (retain, nonatomic) NSNumber *lastScrollViewOffsetY;
@property (weak, nonatomic) DitoPageContext *ditoPageContext;
@property (copy, nonatomic) NSString *ditoNodeTag;
@property (nonatomic) long long preloadType;
@property (copy, nonatomic) NSString *containerID;
@property (readonly, nonatomic) NSNumber *geckoID;
@property (readonly, nonatomic) BOOL isLoadSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)eventExtraParams;
- (double)fontScaleForCubeWithModel:(id)a0;
- (void)subscribeBDXEvent;
- (void)updateLynxWithBizData:(id)a0;
- (void)subscribeUpdate;
- (void)subscribeRemove;
- (void)subscribeScrollEventFrequency;
- (void)subscribeSwitchDitoEvent;
- (void)observeModalViewOffset;
- (long long)lynxPreloadType;
- (void).cxx_destruct;

@end
