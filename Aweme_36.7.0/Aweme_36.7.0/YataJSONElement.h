@class NSError;

@interface YataJSONElement : NSObject <NSCopying>

@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long type;
@property (retain, nonatomic) id rawValue;

+ (BOOL)equivalentTypesSource:(id)a0 target:(id)a1;
+ (BOOL)isBoolean:(id)a0;

- (void)makeMutable;
- (void)setValue:(id)a0 forComponent:(id)a1 replace:(BOOL)a2;
- (id)makePathMutable:(id)a0;
- (void)removeValueForComponent:(id)a0;
- (id)evaluateWithPointer:(id)a0;
- (void)addValue:(id)a0 forPoint:(id)a1;
- (void)removeAtPointer:(id)a0;
- (void)replaceValue:(id)a0 forPointer:(id)a1;
- (void)moveValueFrom:(id)a0 to:(id)a1;
- (void)copyValueFrom:(id)a0 toPointer:(id)a1;
- (void)testValue:(id)a0 atPointer:(id)a1;
- (void)applyWithJSONPatch:(id)a0 relativeToPath:(id)a1;
- (void)applyWithOperation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isContainer;
- (BOOL)isMutable;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForComponent:(id)a0;

@end
