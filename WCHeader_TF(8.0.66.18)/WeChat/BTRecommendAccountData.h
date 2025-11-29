@class NSString, NSArray, BTRecommendUserInfo;

@interface BTRecommendAccountData : NSObject

@property (copy, nonatomic) NSString *bizNickName;
@property (copy, nonatomic) NSString *bizUserName;
@property (copy, nonatomic) NSString *headerUrl;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *appMsgRecommendReason;
@property (retain, nonatomic) NSArray *arrAppMsg;
@property (retain, nonatomic) BTRecommendUserInfo *userInfo;

- (void).cxx_destruct;

@end
