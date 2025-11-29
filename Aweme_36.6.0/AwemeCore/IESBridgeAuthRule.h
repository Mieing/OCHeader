@class NSString, NSArray;

@interface IESBridgeAuthRule : NSObject <NSCoding>

@property (copy, nonatomic) NSString *pattern;
@property (nonatomic) unsigned long long group;
@property (copy, nonatomic) NSArray *includedMethods;
@property (copy, nonatomic) NSArray *excludedMethods;

- (id)initWithPattern:(id)a0 group:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
