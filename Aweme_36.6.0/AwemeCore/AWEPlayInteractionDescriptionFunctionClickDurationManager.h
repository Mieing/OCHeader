@class AWEPlayInteractionDescriptionContext, NSString, AWEPlayInteractionDescriptionExtraModel;

@interface AWEPlayInteractionDescriptionFunctionClickDurationManager : NSObject

@property (weak, nonatomic) AWEPlayInteractionDescriptionContext *parserContext;
@property (weak, nonatomic) AWEPlayInteractionDescriptionExtraModel *extraModel;
@property (copy, nonatomic) NSString *clickMethod;
@property (nonatomic) double videoFunctionClickTimeInterval;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)reset;

@end
