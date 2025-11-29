@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderUniLikeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBaserequest;
@property (nonatomic) unsigned long long likeSeq;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *entityId;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned long long commentId;
@property (nonatomic) unsigned int operationType;
@property (nonatomic) unsigned int interactionIdentity;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *bypassBuffer;
@property (nonatomic) unsigned int bypassBufferType;

+ (void)initialize;

@end
