@class BaseRequest, NSString, FinderBaseRequest, FinderShareUserInfo;

@interface FinderThankRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int interactionType;
@property (retain, nonatomic) NSString *wxUsername;
@property (nonatomic) unsigned long long mentionId;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) FinderShareUserInfo *shareUserInfo;

+ (void)initialize;

@end
