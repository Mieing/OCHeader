@class NSArray;

@interface KaraTextFeature_Embedding1x32 : NSObject <WCTColumnCoding>

@property (retain, nonatomic) NSArray *values;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)initWithValues:(id)a0;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
