@class RecordResponse_BattleRecord_FeedbackInfo_Question;

@interface RecordResponse_BattleRecord_FeedbackInfo : IESLivePBBaseMessage

@property (nonatomic) long long feedbackId;
@property (retain, nonatomic) RecordResponse_BattleRecord_FeedbackInfo_Question *question;
@property (nonatomic) BOOL hasQuestion;
@property (nonatomic) long long updateTime;

+ (id)descriptor;

@end
