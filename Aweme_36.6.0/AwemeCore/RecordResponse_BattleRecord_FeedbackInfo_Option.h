@class NSString;

@interface RecordResponse_BattleRecord_FeedbackInfo_Option : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) int tendency;
@property (nonatomic) BOOL isSelect;

+ (id)descriptor;

@end
