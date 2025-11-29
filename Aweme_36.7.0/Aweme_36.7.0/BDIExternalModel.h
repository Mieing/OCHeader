@class NSString, NSDictionary;

@interface BDIExternalModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *requiredDependencies;
@property (copy, nonatomic) NSDictionary *filePath;
@property (copy, nonatomic) NSDictionary *size;
@property (copy, nonatomic) NSDictionary *signature;
@property (copy, nonatomic) NSString *matchRule;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
