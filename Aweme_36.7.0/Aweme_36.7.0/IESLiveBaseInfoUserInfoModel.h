@class NSString, NSNumber;

@interface IESLiveBaseInfoUserInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *shortId;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) NSNumber *userLevel;
@property (retain, nonatomic) NSNumber *userType;
@property (copy, nonatomic) NSString *displayId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
