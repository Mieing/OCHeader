@class IESLiveInnerFeedContext, NSMutableDictionary, NSString, IESLiveEnterRoomAisle, NSNumber, HTSLiveRoom;

@interface IESLiveInnerFeedDataProviderBuildRequestParamsInjection : NSObject <IESLiveInnerFeedDataProviderInjectionProtocol>

@property (nonatomic) long long maxTime;
@property (nonatomic) long long landscapeMaxTime;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *offsetType;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (nonatomic) BOOL hasOriginRoom;
@property (nonatomic) BOOL isFromFeedDrawer;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) long long roomCount;
@property (retain, nonatomic) HTSLiveRoom *originRoom;
@property (retain, nonatomic) NSString *lastEpisodeIDs;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) BOOL directSort;
@property (retain, nonatomic) NSNumber *latestWatchTime;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willFetchWithURL:(id)a0 withDataChangedType:(unsigned long long)a1 parameters:(id)a2 updateBlock:(id /* block */)a3;
- (id)customRequestHeaderWithDataChangedType:(unsigned long long)a0;
- (void)didFetchWithResponse:(id)a0 error:(id)a1;
- (long long)injectionPriority;
- (id)initWithRoomAisle:(id)a0 context:(id)a1;
- (void)initData:(id)a0;
- (void)p_addPositionParam;
- (id)p_buildAPICommonParam:(id)a0;
- (BOOL)p_isFromEcommerce:(id)a0;
- (void)setCurrentSceneMaxTime:(long long)a0;
- (long long)currentSceneMaxTime;
- (id)singleAndSeqAIFeature;
- (id)innerFeedHistoryRoomIds;
- (id)p_culLastEpisodeIDs:(id)a0;
- (BOOL)isLandscapeScrollFirstRefreshEnable;
- (BOOL)p_isFromVS:(id)a0;
- (void).cxx_destruct;

@end
