@class NSNumber;

@interface AWEBoxedNumber : NSObject <WCTColumnCoding, SSWCTColumnCoding>

@property (readonly, nonatomic) NSNumber *value;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (id)boxedNumberWithValue:(id)a0;
+ (unsigned long long)columnType;

- (id)archivedWCTValue;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
