@interface ToygerBaseModel : NSObject

+ (id)defaultModel;
+ (id)model:(id)a0;

- (id)propertyOfClass:(Class)a0;
- (id)idFromObject:(id)a0;
- (void)copyFromModel:(id)a0;
- (void)reset:(id)a0;
- (id)dictionary;
- (id)init;

@end
