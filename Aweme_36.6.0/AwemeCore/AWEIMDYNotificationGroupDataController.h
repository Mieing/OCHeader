@class NSArray, NSString;

@interface AWEIMDYNotificationGroupDataController : IESIMListDataController <AWEIMDYNotificationGroupDataControllerProtocol>

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSArray *noticeGroupArray;
@property (nonatomic) long long sceneType;
@property (readonly, nonatomic) BOOL isRequestOnAir;
@property (nonatomic) long long agg_group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENoticeInteractorLiteAdapterClass;

- (void)refreshDataWithCompletion:(id /* block */)a0;
- (id)aAWENoticeInteractorLiteAdapter;
- (void)refreshNoticeGroupArrayIfNeededWithNoticeGroupArray:(id)a0;
- (BOOL)isContainInteractionNoticeGroup;
- (BOOL)isContainFansNoticeGroup;
- (BOOL)isContainFlameNoticeGroup;
- (void)requestAsyncNoticesForGroups:(id)a0 onComplete:(id /* block */)a1;
- (id)initWithNoticeGroupArray:(id)a0;
- (id)initWithNoticeGroupArray:(id)a0 sceneType:(long long)a1;
- (void)p_trackMultiInfoWithRequestNoticeGroup:(id)a0;
- (id)p_getParams;
- (BOOL)__enableNoticeMultiOpt;
- (BOOL)__hasInvalidInteractiveGroups:(id)a0;
- (void)p_trackMultiInfoWithResponse:(id)a0 error:(id)a1 requestNoticeGroup:(id)a2;
- (void)monitorInfoWithResponse:(id)a0 error:(id)a1;
- (BOOL)__couldExcludeEnterpriseNotice;
- (void).cxx_destruct;
- (void)clearCache;

@end
