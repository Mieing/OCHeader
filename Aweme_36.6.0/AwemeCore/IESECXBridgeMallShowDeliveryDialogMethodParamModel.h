@class NSString;

@interface IESECXBridgeMallShowDeliveryDialogMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *mainTip;
@property (copy, nonatomic) NSString *subTip;
@property (copy, nonatomic) NSString *dismissBtnText;
@property (copy, nonatomic) NSString *confirmBtnText;
@property (copy, nonatomic) NSString *chatGroupUrl;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
