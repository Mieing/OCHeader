@class HTSLiveMoreLiveEntrance;

@interface MoreLiveEntranceData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMoreLiveEntrance *info;
@property (nonatomic) BOOL hasInfo;

+ (id)descriptor;

@end
