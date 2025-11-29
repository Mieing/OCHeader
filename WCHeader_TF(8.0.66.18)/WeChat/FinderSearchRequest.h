@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderSearchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *hotwordSessionBuffer;
@property (retain, nonatomic) NSData *topicBuffer;
@property (retain, nonatomic) NSData *objHotwordInfoBuff;
@property (retain, nonatomic) NSString *h5ByPass;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *ugcCollectionVideoBuff;

+ (void)initialize;

@end
