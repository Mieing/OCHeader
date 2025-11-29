@class NSData, WCLocationInfo, MMFinderLiveHonCoverCacheInfo;

@interface MMFinderLiveReplayReqTempCacheInfo : NSObject

@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL hasMoreData;
@property (retain, nonatomic) WCLocationInfo *currentLocationInfo;
@property (nonatomic) BOOL isNeedOpenBank;
@property (retain, nonatomic) MMFinderLiveHonCoverCacheInfo *honCoverCacheInfo;

- (void).cxx_destruct;

@end
