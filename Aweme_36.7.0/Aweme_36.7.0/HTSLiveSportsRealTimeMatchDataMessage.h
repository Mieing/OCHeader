@class NSString, HTSLiveCommon;

@interface HTSLiveSportsRealTimeMatchDataMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *sportsMatchData;

+ (id)descriptor;

@end
