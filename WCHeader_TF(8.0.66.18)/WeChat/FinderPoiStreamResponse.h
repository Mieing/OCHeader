@class NSData, NSString, SnsPoiDetail, BaseResponse, FinderPoiStreamTabList, NSMutableArray, FinderContact, FinderPreloadInfo, FinderPoiStreamResponse_PoiPrepare, FinderPoiStreamNearbyInfo;

@interface FinderPoiStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) SnsPoiDetail *snsPoiDetail;
@property (retain, nonatomic) FinderContact *contact;
@property (retain, nonatomic) NSString *noticeWording;
@property (nonatomic) unsigned int onlyShowPoiName;
@property (nonatomic) unsigned int totalFeedsCount;
@property (retain, nonatomic) FinderPoiStreamResponse_PoiPrepare *poiPrepare;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (nonatomic) unsigned int poiFriendLikeCount;
@property (retain, nonatomic) FinderPoiStreamTabList *tabList;
@property (nonatomic) unsigned int currentTabId;
@property (nonatomic) unsigned int addressSubLabelType;
@property (nonatomic) unsigned int nearbyFlag;
@property (retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo;
@property (nonatomic) unsigned int prefetchCount;

+ (void)initialize;

@end
