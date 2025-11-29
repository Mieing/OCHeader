@class NSString, NSNumber;

@interface BDXBridgeIesaccountChoosePhoneAreaMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *phoneCode;
@property (copy, nonatomic) NSString *shortCountryName;
@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) NSNumber *isCancel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
