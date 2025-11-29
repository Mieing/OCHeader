@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderUploadPostProjectRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *posterUsername;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSData *timeline;
@property (retain, nonatomic) NSData *assetInfoChain;

+ (void)initialize;

@end
