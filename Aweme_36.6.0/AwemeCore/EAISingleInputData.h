@class EAIFloatArray;

@interface EAISingleInputData : NSObject

@property (retain, nonatomic) EAIFloatArray *originValues;
@property (retain, nonatomic) EAIFloatArray *processedValues;

- (void).cxx_destruct;

@end
