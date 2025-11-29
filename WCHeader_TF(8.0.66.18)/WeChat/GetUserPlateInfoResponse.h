@class UserPlateInfo, NSString, UserPrivacyProtectInfo, AlertPrivacyInfo, BaseResponse;

@interface GetUserPlateInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) UserPlateInfo *plateInfo;
@property (retain, nonatomic) NSString *authSubDesc;
@property (retain, nonatomic) NSString *createSubDesc;
@property (retain, nonatomic) AlertPrivacyInfo *privacyInfo;
@property (retain, nonatomic) UserPrivacyProtectInfo *privacyProtectInfo;

+ (void)initialize;

@end
