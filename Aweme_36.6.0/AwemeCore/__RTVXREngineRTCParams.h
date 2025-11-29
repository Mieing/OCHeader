@class NSString;

@interface __RTVXREngineRTCParams : JSONModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *userID;

+ (id)keyMapper;

- (void)__setupDefaultValue:(id)a0;
- (void)updateDefaultAppIDWithParams:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
