@class NSString;

@interface W1wUserInfo : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatar;
@property (nonatomic) int avatarStyle;

+ (id)userInfoWithDict:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
