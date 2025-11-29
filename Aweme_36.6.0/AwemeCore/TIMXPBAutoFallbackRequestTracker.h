@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSObject, TIMXSDKInstance;
@protocol OS_dispatch_queue, TIMXAppDoubleTrackerManagerProtocol, TIMXKVStorageProtocol;

@interface TIMXPBAutoFallbackRequestTracker : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) BOOL enableTrack;
@property (retain, nonatomic) id<TIMXAppDoubleTrackerManagerProtocol> tracker;
@property (copy, nonatomic) NSDictionary *cmdSampleConfig;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_trackerQueue;
@property (nonatomic) double timeOfFirstRequest;
@property (retain, nonatomic) NSArray *trackValidRequestList;
@property (retain, nonatomic) NSMutableDictionary *tempRequestDic;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getRandomNumberWithMin:(long long)a0 max:(long long)a1;
- (void)recordRequestBody:(id)a0;
- (void)trackRequestsOfColdStart:(int)a0;
- (void)reportValidRequest:(id)a0;
- (void)trackPBRequestWithPath:(id)a0 params:(id)a1;
- (BOOL)enableTrackWithPath:(id)a0;
- (long long)sampleBaseWithPath:(id)a0;
- (BOOL)shouldUploadWithPath:(id)a0;
- (id)appendAdditionalParamsToEntries:(id)a0;
- (id)p_removeDescriptionPrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
