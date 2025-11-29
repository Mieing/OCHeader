@class BaseRequest, NSString;

@interface GetMaterialRecommWxaCardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *materialType;
@property (retain, nonatomic) NSString *materialSuffix;

+ (void)initialize;

@end
