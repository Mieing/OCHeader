@class NSString, IESLiveChorusAccompanimentInfo, NSMutableArray;

@interface HTSLiveChorusVolumeChangedContent : IESLivePBBaseMessage

@property (nonatomic) long long accompanimentVolume;
@property (nonatomic) long long leaderVolume;
@property (nonatomic) long long singerVolume;
@property (nonatomic) int accompanimentMode;
@property (retain, nonatomic) IESLiveChorusAccompanimentInfo *chorusAccompanimentInfo;
@property (nonatomic) BOOL hasChorusAccompanimentInfo;
@property (retain, nonatomic) NSMutableArray *chorusLeaderLinkmicIdsArray;
@property (readonly, nonatomic) unsigned long long chorusLeaderLinkmicIdsArray_Count;
@property (copy, nonatomic) NSString *anchorLinkmicId;

+ (id)descriptor;

@end
