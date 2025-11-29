@class HTSLiveTeamfightTeamConfigUser, GPBInt64ObjectDictionary;

@interface HTSLiveTeamfightCustomTeamConfig : IESLivePBBaseMessage

@property (nonatomic) BOOL anchorInvolved;
@property (retain, nonatomic) GPBInt64ObjectDictionary *teamConfigMap;
@property (readonly, nonatomic) unsigned long long teamConfigMap_Count;
@property (retain, nonatomic) HTSLiveTeamfightTeamConfigUser *anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) int defaultTeamType;
@property (nonatomic) BOOL needSelectGuest;

+ (id)descriptor;

@end
