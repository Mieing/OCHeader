@class NSString;

@interface OIDFieldMapping : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) Class expectedType;
@property (readonly, nonatomic) id /* block */ conversion;

+ (id)remainingParametersWithMap:(id)a0 parameters:(id)a1 instance:(id)a2;
+ (void)decodeWithCoder:(id)a0 map:(id)a1 instance:(id)a2;
+ (id)JSONTypes;
+ (void)encodeWithCoder:(id)a0 map:(id)a1 instance:(id)a2;
+ (id /* block */)URLConversion;
+ (id /* block */)dateSinceNowConversion;
+ (id /* block */)dateEpochConversion;

- (id)initWithName:(id)a0 type:(Class)a1 conversion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 type:(Class)a1;

@end
