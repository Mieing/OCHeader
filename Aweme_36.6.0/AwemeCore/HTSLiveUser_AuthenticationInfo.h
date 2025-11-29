@class NSString, HTSLiveUser_AuthenticationInfo_AccountTypeInfo, HTSLiveImage, GPBInt32Array;

@interface HTSLiveUser_AuthenticationInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *customVerify;
@property (copy, nonatomic) NSString *enterpriseVerifyReason;
@property (retain, nonatomic) HTSLiveImage *authenticationBadge;
@property (nonatomic) BOOL hasAuthenticationBadge;
@property (retain, nonatomic) GPBInt32Array *levelListArray;
@property (readonly, nonatomic) unsigned long long levelListArray_Count;
@property (retain, nonatomic) HTSLiveUser_AuthenticationInfo_AccountTypeInfo *accountTypeInfo;
@property (nonatomic) BOOL hasAccountTypeInfo;
@property (retain, nonatomic) HTSLiveImage *authenticationBadgeV2;
@property (nonatomic) BOOL hasAuthenticationBadgeV2;
@property (copy, nonatomic) NSString *accountCertInfo;

+ (id)descriptor;

@end
