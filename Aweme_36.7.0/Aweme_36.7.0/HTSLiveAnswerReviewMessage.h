@class NSString, HTSLiveCommon;

@interface HTSLiveAnswerReviewMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int answerReviewMsgTypeEnum;
@property (copy, nonatomic) NSString *answerId;
@property (nonatomic) long long chatId;
@property (nonatomic) int answerReviewResTypeEnum;
@property (nonatomic) long long videoPinId;
@property (nonatomic) long long originalMsgId;
@property (nonatomic) long long pinId;

+ (id)descriptor;

@end
