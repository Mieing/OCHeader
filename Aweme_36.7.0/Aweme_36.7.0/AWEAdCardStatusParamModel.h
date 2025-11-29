@class NSString;

@interface AWEAdCardStatusParamModel : BDXBridgeModel

@property (nonatomic) long long status;
@property (nonatomic) long long from;
@property (copy, nonatomic) NSString *formType;
@property (nonatomic) BOOL disableCloseBtn;
@property (nonatomic) BOOL enableCardClick;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
