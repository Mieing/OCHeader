@class NSString;

@interface IESLiveMultiKTVKSongMidiFeedbackTagConfig : NSObject

@property (copy, nonatomic) NSString *songName;
@property (nonatomic) double score;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *midiFeedbackTips;
@property (nonatomic) BOOL isHighScore;
@property (nonatomic) double highScoreThreshold;

- (void).cxx_destruct;

@end
