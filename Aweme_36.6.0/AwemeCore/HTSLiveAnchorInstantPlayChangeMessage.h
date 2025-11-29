@class HTSLiveCommon, HTSLiveAnchorInstantPlayChangeInfo;

@interface HTSLiveAnchorInstantPlayChangeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveAnchorInstantPlayChangeInfo *anchorInstantPlayChange;
@property (nonatomic) BOOL hasAnchorInstantPlayChange;

+ (id)descriptor;

@end
