@class NSString, NSDictionary;

@interface IESECLiveUIConfigServiceCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSString *componentName;
@property (copy, nonatomic) NSDictionary *params;

- (id)initWithComponentName:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
