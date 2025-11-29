@class NSString;

@interface IESLiveLiveRequireGiftEffectLynxViewParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL draggable;
@property (nonatomic) long long type;
@property (nonatomic) long long action;
@property (nonatomic) BOOL touchable;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *superViewIdentifier;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
