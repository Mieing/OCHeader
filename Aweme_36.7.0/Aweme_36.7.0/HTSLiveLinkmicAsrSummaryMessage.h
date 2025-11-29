@class HTSLiveCommon, HTSLiveLinkmicAsrSummary;

@interface HTSLiveLinkmicAsrSummaryMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveLinkmicAsrSummary *summary;
@property (nonatomic) BOOL hasSummary;

+ (id)descriptor;

@end
