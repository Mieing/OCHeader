@interface AWECloseCardDialogMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL forceCloseCard;
@property (nonatomic) long long cardStatus;
@property (nonatomic) BOOL closeCardWithAnimation;

+ (id)JSONKeyPathsByPropertyKey;

@end
