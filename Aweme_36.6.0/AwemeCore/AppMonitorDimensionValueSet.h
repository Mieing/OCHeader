@class NSMutableDictionary;

@interface AppMonitorDimensionValueSet : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *dict;

- (BOOL)containValueForName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forName:(id)a1;
- (id)valueForName:(id)a0;

@end
