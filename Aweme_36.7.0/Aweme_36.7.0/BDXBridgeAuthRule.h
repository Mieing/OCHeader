@class NSString, NSArray;

@interface BDXBridgeAuthRule : NSObject <NSCoding>

@property (copy, nonatomic) NSString *pattern;
@property (nonatomic) long long group;
@property (copy, nonatomic) NSArray *includedMethods;
@property (copy, nonatomic) NSArray *excludedMethods;

- (id)initWithPattern:(id)a0 group:(long long)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
