@class HTSLiveLowPcuGuideData, HTSLiveCommon;

@interface HTSLiveLowPcuGuideMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveLowPcuGuideData *lowPcuGuideInfo;
@property (nonatomic) BOOL hasLowPcuGuideInfo;

+ (id)descriptor;

@end
