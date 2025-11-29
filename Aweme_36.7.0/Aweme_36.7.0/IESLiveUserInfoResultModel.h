@class NSNumber, NSString;

@interface IESLiveUserInfoResultModel : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (retain, nonatomic) NSNumber *isLogin;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *shortId;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *douyinUid;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *userOpenId;
@property (copy, nonatomic) NSString *userUnionId;
@property (retain, nonatomic) NSNumber *isSilent;

+ (id)modelCustomPropertyMapper;

@end
