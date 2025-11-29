@class NSDictionary, NSSet;

@interface DVETypeConversionRuleGroup : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *customPropertyMapper;
@property (retain, nonatomic) NSSet *deletePrefixSet;
@property (retain, nonatomic) NSSet *ignorePropertyNameSet;
@property (retain, nonatomic) NSSet *needPropertyNameSet;
@property (retain, nonatomic) NSSet *tilesClassNameSet;

+ (id)dve_awemeRuleGroup;

- (id)applyCustomPropertyMapperRuleForString:(id)a0;
- (id)applyForString:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
