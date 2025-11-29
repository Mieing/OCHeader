@class BaseRequest, NSString, FinderLiveStreamGetAsyncLoadInfoRequest_UserLocation, FinderBaseRequest, NSMutableArray;

@interface FinderLiveStreamGetAsyncLoadInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *objectUidList;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int liveReportScene;
@property (nonatomic) unsigned int commentScene;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *clientUserAgent;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSMutableArray *scenes;
@property (nonatomic) BOOL isRefresh;
@property (nonatomic) unsigned int triggerScene;
@property (retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoRequest_UserLocation *userLocation;
@property (retain, nonatomic) NSMutableArray *liveAggregationCardId;
@property (retain, nonatomic) NSMutableArray *cardInfoList;
@property (retain, nonatomic) NSMutableArray *liveroomInfo;
@property (retain, nonatomic) NSMutableArray *interactionEntryType;

+ (void)initialize;

@end
