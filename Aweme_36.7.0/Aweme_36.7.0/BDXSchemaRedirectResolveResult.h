@class NSString, NSArray, NSError;

@interface BDXSchemaRedirectResolveResult : NSObject

@property (nonatomic) BOOL isSuccessful;
@property (copy, nonatomic) NSString *resolvedSchema;
@property (copy, nonatomic) NSString *entry;
@property (copy, nonatomic) NSArray *ruleTypes;
@property (copy, nonatomic) NSString *entryConfigString;
@property (copy, nonatomic) NSString *defaultSchema;
@property (nonatomic) BOOL useDefaultSchema;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
