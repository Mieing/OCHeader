@class NSNumber, NSArray, NSString;

@interface AWEEccsCreateParentConversationParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *inbox;
@property (copy, nonatomic) NSArray *participantsBizRoleObjects;
@property (copy, nonatomic) NSString *idempotentIdentifier;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
