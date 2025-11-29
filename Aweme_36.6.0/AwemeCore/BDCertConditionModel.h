@class NSString, NSDictionary;

@interface BDCertConditionModel : NSObject

@property (copy, nonatomic) NSString *conditionId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
