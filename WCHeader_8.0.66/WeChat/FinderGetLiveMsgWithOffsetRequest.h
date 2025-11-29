@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetLiveMsgWithOffsetRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int offsetInSecond;
@property (nonatomic) BOOL isContinualRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *highlightId;

+ (void)initialize;

@end
