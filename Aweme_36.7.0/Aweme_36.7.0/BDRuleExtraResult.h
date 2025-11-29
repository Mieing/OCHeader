@class NSDictionary;

@interface BDRuleExtraResult : NSObject

@property (nonatomic) BOOL hitRule;
@property (nonatomic) BOOL needPostProcess;
@property (retain, nonatomic) NSDictionary *context;

- (void).cxx_destruct;
- (id)init;

@end
