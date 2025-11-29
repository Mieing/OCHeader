@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderApplyStorePromotionRightsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int permissionType;
@property (nonatomic) unsigned int operType;

+ (void)initialize;

@end
