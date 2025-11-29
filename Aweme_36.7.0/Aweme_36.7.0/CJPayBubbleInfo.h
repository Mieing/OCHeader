@class NSDictionary;

@interface CJPayBubbleInfo : JSONModel

@property (copy, nonatomic) NSDictionary *button;
@property (copy, nonatomic) NSDictionary *paytype;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)bubbleInfoStringWithType:(unsigned long long)a0;
- (id)p_getBubbleInfo:(unsigned long long)a0;
- (void).cxx_destruct;

@end
