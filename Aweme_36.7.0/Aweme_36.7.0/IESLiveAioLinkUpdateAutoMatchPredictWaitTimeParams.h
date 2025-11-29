@class BattleAutoMatchResult_PreviewUser;

@interface IESLiveAioLinkUpdateAutoMatchPredictWaitTimeParams : IESLivePBBaseMessage

@property (nonatomic) long long matchType;
@property (nonatomic) long long predictWaitTime;
@property (nonatomic) long long waitedTime;
@property (retain, nonatomic) BattleAutoMatchResult_PreviewUser *previewUser;
@property (nonatomic) BOOL hasPreviewUser;

+ (id)descriptor;

@end
