@class NSDictionary, NSString;

@interface FurionSmartEngineInputData : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *factors;
@property (copy, nonatomic) NSString *runKey;
@property (copy, nonatomic) NSString *enterType;

- (void)mergeInputData:(id)a0;
- (void).cxx_destruct;

@end
