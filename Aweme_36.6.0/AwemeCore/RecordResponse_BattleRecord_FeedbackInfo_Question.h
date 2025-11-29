@class NSString, NSMutableArray;

@interface RecordResponse_BattleRecord_FeedbackInfo_Question : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *questionKey;
@property (copy, nonatomic) NSString *questionText;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;
@property (nonatomic) long long questionId;

+ (id)descriptor;

@end
