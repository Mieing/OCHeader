@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveUpdateGameScoreMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) NSMutableArray *gameScoresArray;
@property (readonly, nonatomic) unsigned long long gameScoresArray_Count;
@property (nonatomic) long long roundId;
@property (nonatomic) int gameStatus;
@property (nonatomic) long long msgTimeStamp;

+ (id)descriptor;

@end
