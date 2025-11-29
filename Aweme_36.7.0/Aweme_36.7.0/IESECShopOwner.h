@class NSString, NSArray;

@interface IESECShopOwner : NSObject <NSCopying>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSArray *avatars;
@property (nonatomic) long long followStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
