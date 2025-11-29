@class NSString;

@interface HTSLiveDrumMessage_User : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *userIdStr;
@property (copy, nonatomic) NSString *userOpenId;
@property (copy, nonatomic) NSString *userOpenIdStr;

+ (id)descriptor;

@end
