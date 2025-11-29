@class FinderLiveDiscoverPreloadConfig, FinderNotifyGetMoreLiveConfig, NSString, NSData, FinderLiveTabInfo, NSMutableArray, BaseResponse;

@interface FinderNotifyGetMoreLiveResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) FinderNotifyGetMoreLiveConfig *config;
@property (retain, nonatomic) FinderLiveTabInfo *jumpTabInfo;
@property (nonatomic) unsigned int jumpType;
@property (nonatomic) unsigned int reqInterval;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderLiveDiscoverPreloadConfig *liveNoticePreloadConfig;
@property (retain, nonatomic) NSString *leftContent;
@property (nonatomic) unsigned long long requestId;
@property (nonatomic) BOOL isEnable;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;

+ (void)initialize;

@end
