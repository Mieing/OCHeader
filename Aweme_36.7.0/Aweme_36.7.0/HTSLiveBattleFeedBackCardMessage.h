@class NSString, HTSLiveCommon, HTSLiveFeedbackCard;

@interface HTSLiveBattleFeedBackCardMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *rivalUid;
@property (nonatomic) int feedbackCardType;
@property (retain, nonatomic) HTSLiveFeedbackCard *feedbackCard;
@property (nonatomic) BOOL hasFeedbackCard;
@property (nonatomic) long long battleId;
@property (nonatomic) long long channelId;

+ (id)descriptor;

@end
