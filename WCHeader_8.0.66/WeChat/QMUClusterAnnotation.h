@class NSMutableSet;

@interface QMUClusterAnnotation : QMUAnnotation

@property (readonly, nonatomic) unsigned long long count;
@property (retain, nonatomic) NSMutableSet *items;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)add:(id)a0;
- (void)remove:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
