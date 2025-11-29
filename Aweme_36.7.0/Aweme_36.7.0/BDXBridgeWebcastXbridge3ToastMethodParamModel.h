@class NSString;

@interface BDXBridgeWebcastXbridge3ToastMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long status;
@property (nonatomic) BOOL close;
@property (copy, nonatomic) NSString *image;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
