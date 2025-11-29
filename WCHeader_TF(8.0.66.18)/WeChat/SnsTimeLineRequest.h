@class SnsAdExpInfo, BaseRequest, NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface SnsTimeLineRequest : WXPBGeneratedMessage {
    int realFeedExposureIdsMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (nonatomic) unsigned long long maxId;
@property (nonatomic) unsigned long long minFilterId;
@property (nonatomic) unsigned int lastRequestTime;
@property (nonatomic) unsigned long long clientLatestId;
@property (retain, nonatomic) SKBuiltinBuffer_t *session;
@property (nonatomic) unsigned int networkType;
@property (retain, nonatomic) SnsAdExpInfo *adexpinfo;
@property (nonatomic) unsigned int realFeedExposureIdsCount;
@property (retain, nonatomic) NSMutableArray *realFeedExposureIds;
@property (nonatomic) unsigned int updateTimelineScene;
@property (nonatomic) unsigned int pullType;
@property (nonatomic) unsigned long long minIdForGetPrePage;
@property (nonatomic) unsigned long long minIdForCheckUnread;
@property (nonatomic) unsigned long long nearbyFoldId;
@property (nonatomic) unsigned int foldSectionSize;
@property (nonatomic) unsigned long long getTimeLineIdxMinId;
@property (retain, nonatomic) SKBuiltinBuffer_t *adPassThroughInfo;
@property (nonatomic) unsigned int switchOfWsNotFold;
@property (nonatomic) unsigned int wsNotFoldListCount;
@property (retain, nonatomic) NSMutableArray *wsNotFoldList;
@property (nonatomic) unsigned int wsNotFoldUseCache;
@property (nonatomic) unsigned int snsDragon2024Ext;
@property (retain, nonatomic) SKBuiltinBuffer_t *wssessionBuf;

+ (void)initialize;

- (void)setWssessionBuf:(id)a0;
- (id)wssessionBuf;
- (void)setSnsDragon2024Ext:(unsigned int)a0;
- (unsigned int)snsDragon2024Ext;
- (void)setWsNotFoldUseCache:(unsigned int)a0;
- (unsigned int)wsNotFoldUseCache;
- (void)setWsNotFoldList:(id)a0;
- (id)wsNotFoldList;
- (void)setWsNotFoldListCount:(unsigned int)a0;
- (unsigned int)wsNotFoldListCount;
- (void)setSwitchOfWsNotFold:(unsigned int)a0;
- (unsigned int)switchOfWsNotFold;
- (void)setAdPassThroughInfo:(id)a0;
- (id)adPassThroughInfo;
- (void)setGetTimeLineIdxMinId:(unsigned long long)a0;
- (unsigned long long)getTimeLineIdxMinId;
- (void)setFoldSectionSize:(unsigned int)a0;
- (unsigned int)foldSectionSize;
- (void)setNearbyFoldId:(unsigned long long)a0;
- (unsigned long long)nearbyFoldId;
- (void)setMinIdForCheckUnread:(unsigned long long)a0;
- (unsigned long long)minIdForCheckUnread;
- (void)setMinIdForGetPrePage:(unsigned long long)a0;
- (unsigned long long)minIdForGetPrePage;
- (void)setPullType:(unsigned int)a0;
- (unsigned int)pullType;
- (void)setUpdateTimelineScene:(unsigned int)a0;
- (unsigned int)updateTimelineScene;
- (void)setRealFeedExposureIds:(id)a0;
- (id)realFeedExposureIds;
- (void)setRealFeedExposureIdsCount:(unsigned int)a0;
- (unsigned int)realFeedExposureIdsCount;
- (void)setAdexpinfo:(id)a0;
- (id)adexpinfo;
- (void)setNetworkType:(unsigned int)a0;
- (unsigned int)networkType;
- (void)setSession:(id)a0;
- (id)session;
- (void)setClientLatestId:(unsigned long long)a0;
- (unsigned long long)clientLatestId;
- (void)setLastRequestTime:(unsigned int)a0;
- (unsigned int)lastRequestTime;
- (void)setMinFilterId:(unsigned long long)a0;
- (unsigned long long)minFilterId;
- (void)setMaxId:(unsigned long long)a0;
- (unsigned long long)maxId;
- (void)setFirstPageMd5:(id)a0;
- (id)firstPageMd5;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;
- (id)shortDebugString;

@end
