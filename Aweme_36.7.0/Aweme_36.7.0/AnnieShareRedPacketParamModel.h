@class NSString;

@interface AnnieShareRedPacketParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *identifyId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *value;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
