@class NSString;

@interface FinderGameBindBaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *openid;
@property (retain, nonatomic) NSString *ctxBusiness;
@property (nonatomic) unsigned int bindType;

+ (void)initialize;

@end
