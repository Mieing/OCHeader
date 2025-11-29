@class NSSet, NSDictionary;

@interface DVETypeConversionClassContext : NSObject

@property (readonly, nonatomic) NSSet *propertyNameSet;
@property (readonly, nonatomic) NSDictionary *propertyKeyDictionary;

+ (id)contextWithClass:(Class)a0 ruleGroup:(id)a1;

- (id)initWithNameSet:(id)a0 keyDic:(id)a1;
- (void).cxx_destruct;

@end
