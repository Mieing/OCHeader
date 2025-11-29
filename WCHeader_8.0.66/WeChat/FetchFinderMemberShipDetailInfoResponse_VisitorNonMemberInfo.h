@class NSData, FinderLiveNoticeListInfo, NSMutableArray;

@interface FetchFinderMemberShipDetailInfoResponse_VisitorNonMemberInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (retain, nonatomic) NSMutableArray *previewVideo;
@property (nonatomic) unsigned int otherVideoNum;
@property (retain, nonatomic) NSMutableArray *previewLive;
@property (nonatomic) unsigned int otherLiveNum;
@property (retain, nonatomic) NSMutableArray *previewVideoList;
@property (retain, nonatomic) NSMutableArray *previewLiveList;
@property (retain, nonatomic) NSMutableArray *previewDynamic;
@property (nonatomic) unsigned int totalDynamicNum;
@property (retain, nonatomic) NSMutableArray *videoShortList;
@property (retain, nonatomic) NSData *videoShortLastBuffer;
@property (retain, nonatomic) NSMutableArray *liveShortList;
@property (retain, nonatomic) NSData *liveShortLastBuffer;
@property (nonatomic) unsigned long long previewVideoLastUpdateTime;
@property (nonatomic) unsigned long long previewLiveLastUpdateTime;

+ (void)initialize;

@end
