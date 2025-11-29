@class NSString;

@interface FansclubMeResult_TaskInfo_Button : IESLivePBBaseMessage

@property (nonatomic) int buttonType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long giftId;
@property (nonatomic) long long giftCoinCount;
@property (nonatomic) long long remainAmount;

+ (id)descriptor;

@end
