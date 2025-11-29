@class NSString;

@interface UserBasicInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *badgeURL;
@property (copy, nonatomic) NSString *clubName;
@property (nonatomic) BOOL mysteryMan;

+ (id)descriptor;

@end
