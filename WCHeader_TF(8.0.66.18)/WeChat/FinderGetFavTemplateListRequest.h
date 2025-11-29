@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetFavTemplateListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) BOOL forceTestEnv;
@property (retain, nonatomic) NSData *pageBuffer;

+ (void)initialize;

@end
