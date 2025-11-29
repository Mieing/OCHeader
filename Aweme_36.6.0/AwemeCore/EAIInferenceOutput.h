@class NSArray, EAIInferenceInput, EAIModelTable, NSError;

@interface EAIInferenceOutput : NSObject

@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) EAIModelTable *model;
@property (retain, nonatomic) EAIInferenceInput *input;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
