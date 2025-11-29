@class NSString, NSNumber;

@interface BDASifUserInfoModel : NSObject

@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *bindPhone;
@property (retain, nonatomic) NSNumber *isLogin;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *userId;

- (void).cxx_destruct;

@end
