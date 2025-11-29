@class NSDictionary, NSNumber;

@interface TriggerPreProcessorMethodModel : NSObject

@property (copy, nonatomic) NSDictionary *paramData;
@property (copy, nonatomic) NSNumber *paramOptimize;
@property (nonatomic) BOOL isParamModelExist;

- (void).cxx_destruct;

@end
