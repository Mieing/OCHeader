@class NSString;

@interface EdgeComputingDBFieldModel : MMObject <NSCopying>

@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toString;
- (void).cxx_destruct;

@end
