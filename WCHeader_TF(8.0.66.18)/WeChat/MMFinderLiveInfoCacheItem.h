@class NSString, NSArray, WCFinderLiveInfo, WCFinderGetLiveInfoModel, FinderLiveAbnormalClosedPageInfo;

@interface MMFinderLiveInfoCacheItem : NSObject

@property (nonatomic) unsigned long long creationUnixEpochTime;
@property (nonatomic) unsigned long long expirationUnixEpochTimeInSecond;
@property (retain, nonatomic) WCFinderLiveInfo *liveInfo;
@property (nonatomic) unsigned int liveNewFansNum;
@property (nonatomic) unsigned int refreshIntervalInSecond;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSArray *jumpInfos;
@property (retain, nonatomic) WCFinderGetLiveInfoModel *successCallbackModel;
@property (retain, nonatomic) FinderLiveAbnormalClosedPageInfo *abnormalClosePage;

+ (id)keyWithGetLiveInfoParams:(id)a0;

- (void).cxx_destruct;

@end
