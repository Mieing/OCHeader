@class NSString;

@interface GetFansclubHomepageResult_Data_UserTaskInfo_Button : IESLivePBBaseMessage

@property (nonatomic) int buttonType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long giftId;
@property (nonatomic) long long giftCoinCount;
@property (nonatomic) long long remainAmount;
@property (copy, nonatomic) NSString *giftSource;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
