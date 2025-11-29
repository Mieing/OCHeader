@class NSDecimalNumber;

@interface CJPayMoney : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *innerNum;

+ (id)new;
+ (id)zero;
+ (id)one;

- (id)initWithCent:(long long)a0;
- (id)yuan;
- (long long)cent;
- (id)divide:(id)a0;
- (id)initWithBaseUnitAmount:(long long)a0;
- (id)usedLocale;
- (long long)numFractionDigits;
- (long long)baseUnitAmount;
- (unsigned long long)defaultRoundingMode;
- (id)customBehaviorWithRoundingMode:(unsigned long long)a0;
- (unsigned long long)formatterRoundingModeFromCJRoundingMode:(unsigned long long)a0;
- (unsigned long long)roundingModeFromCJRoundingMode:(unsigned long long)a0;
- (id)roundedBy:(unsigned long long)a0;
- (id)symbolSpaceYuan;
- (BOOL)neq:(id)a0;
- (BOOL)gte:(id)a0;
- (BOOL)lte:(id)a0;
- (BOOL)eq:(id)a0;
- (id)rounded;
- (BOOL)gt:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithString:(id)a0;
- (id)defaultBehavior;
- (id)add:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)lt:(id)a0;
- (id)initWithDecimal:(id)a0;
- (id)subtract:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)format:(id)a0;
- (id)multiply:(id)a0;

@end
