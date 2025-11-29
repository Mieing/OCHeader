@class NSString, HMAggregateParam, HMModuleConfig;

@interface HMInstanceConfig : NSObject

@property (readonly, copy, nonatomic) NSString *moduleId;
@property (readonly, copy, nonatomic) NSString *aid;
@property (nonatomic) BOOL enableSemiFinished;
@property (nonatomic) BOOL enableAggregate;
@property (retain, nonatomic) HMAggregateParam *aggregateParam;
@property (readonly, weak, nonatomic) HMModuleConfig *moduleConfig;

- (id)initWithModuleId:(id)a0 aid:(id)a1;
- (void).cxx_destruct;

@end
