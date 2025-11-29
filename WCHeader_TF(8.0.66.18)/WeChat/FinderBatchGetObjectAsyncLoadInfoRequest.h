@class BaseRequest, NSString, FinderBatchGetObjectAsyncLoadInfoRequest_UserLocation, FinderBaseRequest, NSMutableArray, NSData;

@interface FinderBatchGetObjectAsyncLoadInfoRequest : WXPBGeneratedMessage

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
@property (retain, nonatomic) FinderBatchGetObjectAsyncLoadInfoRequest_UserLocation *userLocation;
@property (nonatomic) unsigned int locationGeneratedTime;
@property (retain, nonatomic) NSData *relatedListBuffer;

+ (void)initialize;

@end
