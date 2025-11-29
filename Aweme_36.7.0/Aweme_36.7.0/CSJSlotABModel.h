@class NSString;

@interface CSJSlotABModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *rit;
@property (nonatomic) long long adSlotType;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) double timestamp;

- (void)setupDataWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithDictionary:(id)a0;

@end
