@class NSString;

@interface BDXBridgeChoosePhoneAreaMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *phoneCode;
@property (copy, nonatomic) NSString *shortCountryName;
@property (nonatomic) BOOL isCancel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
