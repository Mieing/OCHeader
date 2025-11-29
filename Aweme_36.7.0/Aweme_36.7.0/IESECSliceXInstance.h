@class NSString, NSMutableDictionary, NSDictionary, NSMapTable, IESECSliceXInstanceConfig, IESECSliceXExposureElementViewStorage, IESECSliceXEventManager;
@protocol IESECSliceXEventForwardDelegate, SLICallbackInterface;

@interface IESECSliceXInstance : NSObject <IESECSliceXInstanceInterface>

@property (retain, nonatomic) IESECSliceXEventManager *eventManager;
@property (retain, nonatomic) NSMutableDictionary *sharedNonScalingGlobalProps;
@property (retain, nonatomic) NSDictionary *innerTrackerBizParams;
@property (weak, nonatomic) id<SLICallbackInterface> callbackDelegate;
@property (retain, nonatomic) NSMapTable *bizRegisteredObjects;
@property (readonly, nonatomic) IESECSliceXInstanceConfig *config;
@property (retain, nonatomic) IESECSliceXExposureElementViewStorage *exposureStorage;
@property (weak, nonatomic) id<IESECSliceXEventForwardDelegate> eventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)getElementViewInSliceXView:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)registerBizObjectWithKey:(id)a0 bizObj:(id)a1;
- (void)setServerTime:(unsigned long long)a0;
- (id)createSliceXViewWithAsyncBundle:(id)a0 complete:(id /* block */)a1;
- (void)bindSliceXView:(id)a0 dataSource:(id)a1 fitSize:(struct CGSize { double x0; double x1; })a2 complete:(id /* block */)a3;
- (void)bindSliceXView:(id)a0 dataSource:(id)a1 complete:(id /* block */)a2;
- (void)bindSliceXViewWithoutCalculateSize:(id)a0 dataSource:(id)a1 complete:(id /* block */)a2;
- (id)createSliceXViewWithSyncBundle:(id)a0 error:(id *)a1;
- (id)createSliceXViewWithSyncBundle:(id)a0 andBindDataSource:(id)a1 fitSize:(struct CGSize { double x0; double x1; })a2 viewSize:(struct CGSize { double x0; double x1; } *)a3 error:(id *)a4;
- (id)createSliceXViewWithSyncBundle:(id)a0 andBindDataSource:(id)a1 viewSize:(struct CGSize { double x0; double x1; } *)a2 error:(id *)a3;
- (id)createSliceXViewWithSyncBundle:(id)a0 andBindDataSource:(id)a1 error:(id *)a2;
- (struct CGSize { double x0; double x1; })bindSliceXView:(id)a0 dataSource:(id)a1 fitSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (struct CGSize { double x0; double x1; })bindSliceXView:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (void)bindSliceXViewWithoutCalculateSize:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (id)asyncPreCreateViewsAndBindMockData;
- (id)asyncPreCreateViewsAndBindMockDataOnMainThread:(BOOL)a0;
- (BOOL)isLocalResourceExistForURLString:(id)a0 error:(id *)a1;
- (void)registerForestFetcherSequenceWithChannel:(id)a0 defaultFetcherSequence:(id)a1 fileSpecificFetcherSequence:(id)a2;
- (void)sliceXViewHitTestPassthroughRoot:(id)a0;
- (void)resetSliceXViewHitTestPassthroughRoot:(id)a0;
- (id)getStorageDataInSliceXView:(id)a0 withKey:(id)a1 filter:(id /* block */)a2 error:(id *)a3;
- (double)getSliceXViewScaleFactor:(id)a0;
- (void)updateInnerTrackerWithLogID:(id)a0 bizCommonParams:(id)a1;
- (void)registerCallbackDelegate:(id)a0;
- (void)registerServiceWithKey:(id)a0 service:(id)a1;
- (void)unregisterBizObjectWithKey:(id)a0;
- (void)unregisterServiceWithKey:(id)a0;
- (id)getBizObjectWithKey:(id)a0;
- (id)getServiceWithKey:(id)a0;
- (void)resetStatus:(unsigned long long)a0;
- (double)getCurrentServerTimeMs;
- (id)createResourceMetaDataWithTemplateMetaData:(id)a0;
- (id)createDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
