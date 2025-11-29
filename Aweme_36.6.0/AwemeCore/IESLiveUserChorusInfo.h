@class NSString;

@interface IESLiveUserChorusInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long order;
@property (nonatomic) BOOL needPushRtc;
@property (nonatomic) BOOL needApproach;
@property (nonatomic) double singleSegmentMidiScore;
@property (nonatomic) double averageMidiScore;
@property (nonatomic) BOOL isLead;

+ (id)descriptor;

@end
