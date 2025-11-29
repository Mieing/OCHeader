@class NSString, NSNumber, NSArray;

@interface AWEEccsCreateSubConversationParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *parentConversationShortID;
@property (copy, nonatomic) NSString *parentConversationID;
@property (retain, nonatomic) NSNumber *inbox;
@property (copy, nonatomic) NSArray *participantsObjects;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
