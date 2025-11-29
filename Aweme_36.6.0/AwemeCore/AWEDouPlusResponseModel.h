@class NSString, NSDictionary;

@interface AWEDouPlusResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL pass;
@property (nonatomic) BOOL isAdExist;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *douPlusLinkUrl;
@property (copy, nonatomic) NSString *douPlusLiteLinkUrl;
@property (copy, nonatomic) NSDictionary *douPlusLogExtraDict;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
