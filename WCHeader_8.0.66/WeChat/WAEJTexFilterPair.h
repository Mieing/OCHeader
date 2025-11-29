@interface WAEJTexFilterPair : NSObject <NSCopying>

@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned int type;

- (id)initWithFormat:(unsigned int)a0 type:(unsigned int)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
