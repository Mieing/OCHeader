@interface RTVInteractionOperationSection : NSObject <NSCopying>

@property (nonatomic) long long businessType;
@property (nonatomic) long long businessMethod;
@property (nonatomic) long long roomID;
@property (nonatomic) long long operationRole;

- (id)initWithOperation:(id)a0;
- (id)hashString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
