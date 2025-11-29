@class NSString;

@interface ACCAIConflictNode : NSObject <NSCopying>

@property (copy, nonatomic) NSString *UUID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long scene;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
