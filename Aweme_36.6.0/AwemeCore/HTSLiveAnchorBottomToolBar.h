@class HTSLiveAudienceLinkmicEntranceInfo, HTSLiveAnchorLinkmicEntranceInfo;

@interface HTSLiveAnchorBottomToolBar : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAnchorLinkmicEntranceInfo *anchorLinkmicEntrance;
@property (nonatomic) BOOL hasAnchorLinkmicEntrance;
@property (retain, nonatomic) HTSLiveAudienceLinkmicEntranceInfo *audienceLinkmicEntrance;
@property (nonatomic) BOOL hasAudienceLinkmicEntrance;

+ (id)descriptor;

@end
