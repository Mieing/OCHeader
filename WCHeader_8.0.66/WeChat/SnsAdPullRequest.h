@class SnsAdExpInfo, BaseRequest, NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface SnsAdPullRequest : WXPBGeneratedMessage {
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

+ (void)initialize;

@end
