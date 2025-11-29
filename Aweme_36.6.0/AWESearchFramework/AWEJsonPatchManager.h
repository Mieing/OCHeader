@class NSMutableDictionary;

@interface AWEJsonPatchManager : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *propertyKeyDictionary;
@property (class, retain, nonatomic) NSMutableDictionary *classAdapterDictionary;

+ (void)reversePropertyMap:(id)a0 className:(id)a1;
+ (void)setError:(id *)a0 errorCode:(long long)a1;

- (BOOL)patchOriginModel:(id)a0 withPatch:(id)a1 patchedModelKeyPaths:(id)a2 error:(id *)a3;
- (BOOL)p_isValidPatchInfo:(id)a0;
- (void)writeModelPath:(id)a0 intoDictionary:(id)a1;
- (BOOL)patchOriginModel:(id)a0 withPatchInfo:(id)a1 withPatch:(id)a2 error:(id *)a3;
- (BOOL)patchOriginModel:(id)a0 withPatch:(id)a1 error:(id *)a2;

@end
