@class NSString;

@interface BDXBridgeShowModalMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL showCancel;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (nonatomic) BOOL tapMaskToDismiss;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
