@class NSString;

@interface AnnieGetUserInfoUserInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *shortID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarURL;
@property (nonatomic) BOOL isBoundPhone;

- (void).cxx_destruct;

@end
