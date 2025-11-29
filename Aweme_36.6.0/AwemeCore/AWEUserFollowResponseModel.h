@class NSString, AFDFamiliarActivityModel, AWECodeGenFunctionBanPopupModel, NSError, AWEUserFollowUnreadFooter;

@interface AWEUserFollowResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long postNotificationStatus;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSString *mobileKey;
@property (nonatomic) BOOL isEnterprise;
@property (nonatomic) BOOL isFirstFollow;
@property (copy, nonatomic) NSString *verifyType;
@property (retain, nonatomic) AFDFamiliarActivityModel *familiarActivityModel;
@property (retain, nonatomic) AWEUserFollowUnreadFooter *unreadFooter;
@property (nonatomic) BOOL isBizAccount;
@property (retain, nonatomic) AWECodeGenFunctionBanPopupModel *popupConfig;

+ (id)userJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)postNotificationStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
