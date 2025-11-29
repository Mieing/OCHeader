@class NSString, AWEUserModel;

@interface AWECoProduceUserModel : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long userRoleId;
@property (copy, nonatomic) NSString *userRoleName;

- (id)initWithUser:(id)a0 userRoleId:(long long)a1 userRoleName:(id)a2;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
