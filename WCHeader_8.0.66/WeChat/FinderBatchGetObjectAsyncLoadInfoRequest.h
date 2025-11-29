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

- (void)setRelatedListBuffer:(id)a0;
- (id)relatedListBuffer;
- (void)setLocationGeneratedTime:(unsigned int)a0;
- (unsigned int)locationGeneratedTime;
- (void)setUserLocation:(id)a0;
- (id)userLocation;
- (void)setTriggerScene:(unsigned int)a0;
- (unsigned int)triggerScene;
- (void)setIsRefresh:(BOOL)a0;
- (BOOL)isRefresh;
- (void)setScenes:(id)a0;
- (id)scenes;
- (void)setUxinfo:(id)a0;
- (id)uxinfo;
- (void)setClientUserAgent:(id)a0;
- (id)clientUserAgent;
- (void)setFinderUsername:(id)a0;
- (id)finderUsername;
- (void)setCommentScene:(unsigned int)a0;
- (unsigned int)commentScene;
- (void)setLiveReportScene:(unsigned int)a0;
- (unsigned int)liveReportScene;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setObjectUidList:(id)a0;
- (id)objectUidList;
- (void)setFinderBasereq:(id)a0;
- (id)finderBasereq;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
