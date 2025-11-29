@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface NewLifeGetMentionListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int requestScene;
@property (nonatomic) unsigned int fetchScene;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
