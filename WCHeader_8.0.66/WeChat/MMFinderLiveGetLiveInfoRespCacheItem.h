@class WCFinderGetLiveInfoModel, NSString, WCFinderLiveInfo;

@interface MMFinderLiveGetLiveInfoRespCacheItem : NSObject

@property (retain, nonatomic) WCFinderLiveInfo *liveInfo;
@property (retain, nonatomic) WCFinderGetLiveInfoModel *getLiveInfoModel;
@property (retain, nonatomic) NSString *reportExtInfo;
@property (nonatomic) unsigned int noticeType;
@property (retain, nonatomic) NSString *tipsId;

- (void).cxx_destruct;

@end
