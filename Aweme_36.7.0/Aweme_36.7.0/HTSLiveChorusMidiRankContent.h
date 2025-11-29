@class NSString, NSMutableArray;

@interface HTSLiveChorusMidiRankContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *chorusMidiRankArray;
@property (readonly, nonatomic) unsigned long long chorusMidiRankArray_Count;
@property (nonatomic) long long displayDuration;
@property (nonatomic) long long userNum;
@property (nonatomic) long long songId;
@property (copy, nonatomic) NSString *songName;
@property (copy, nonatomic) NSString *chorusTotalScore;

+ (id)descriptor;

@end
