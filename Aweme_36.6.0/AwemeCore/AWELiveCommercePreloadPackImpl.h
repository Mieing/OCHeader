@class AWEAwemeModel;

@interface AWELiveCommercePreloadPackImpl : IESLiveBackendRequestBaseImpl

@property (retain, nonatomic) AWEAwemeModel *awemeModelToLiveRoom;

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (id)enterLiveRoomData;
- (BOOL)enterFromSkyLight;
- (BOOL)enterFromInnerLiveStreamAd;
- (BOOL)enterFromAd;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (void).cxx_destruct;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
