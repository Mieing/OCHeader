@class NSString;

@interface AWESearchPOIBarConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *strDataID;
@property (copy, nonatomic) NSString *strBarRightButtonText;
@property (copy, nonatomic) NSString *strBarLeftIconURL;
@property (copy, nonatomic) NSString *strBarLeftText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
