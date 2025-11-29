@class NSString;

@interface MMHandOffAttributes : MMObject <NSCopying>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *createtime;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *to;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
