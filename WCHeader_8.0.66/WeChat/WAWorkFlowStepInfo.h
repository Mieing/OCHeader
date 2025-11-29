@class NSString, NSNumber;
@protocol WAWorkFlowImplement;

@interface WAWorkFlowStepInfo : NSObject

@property (retain, nonatomic) NSString *stepName;
@property (copy, nonatomic) id /* block */ stepBlock;
@property (retain, nonatomic) id<WAWorkFlowImplement> stepSubWorkFlow;
@property (retain, nonatomic) NSNumber *numResult;
@property (retain, nonatomic) NSString *error;

- (void)dealloc;
- (void).cxx_destruct;

@end
