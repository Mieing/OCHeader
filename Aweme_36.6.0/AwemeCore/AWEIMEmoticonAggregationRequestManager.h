@class NSString;

@interface AWEIMEmoticonAggregationRequestManager : HTSService <IESIMUserServiceMessage, IESIMStickerAggregationRequestService>

@property (nonatomic) BOOL didRequestAggregation;
@property (nonatomic) BOOL isFetching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)requestEmoticonAggregationIfNeed;
- (void)p_handleResponse:(id)a0;
- (void)p_prepareFetch;
- (id)p_setupTrackersWithScenes:(id)a0;
- (id)init;
- (void)dealloc;

@end
