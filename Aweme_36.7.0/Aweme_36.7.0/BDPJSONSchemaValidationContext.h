@class NSString, BDPJSONSchema, NSMutableOrderedSet, NSMutableArray;

@interface BDPJSONSchemaValidationContext : NSObject {
    NSMutableOrderedSet *_validationStack;
    NSMutableArray *_validationPathStack;
    NSString *_validationPathCache;
}

@property (readonly, nonatomic) BDPJSONSchema *validatedSchema;
@property (readonly, nonatomic) id validatedObject;
@property (readonly, copy, nonatomic) NSString *validationPath;

- (BOOL)pushValidatedSchema:(id)a0 object:(id)a1 withError:(id *)a2;
- (void)popValidatedSchemaAndObject;
- (void)pushValidationPathComponent:(id)a0;
- (void)popValidationPathComponent;
- (void).cxx_destruct;
- (id)init;

@end
