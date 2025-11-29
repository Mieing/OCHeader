@class NSString, IESLiveMultiPKModeInfo;

@interface HTSLiveLinkerChangeMultiPKTeamInfoContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveMultiPKModeInfo *multiPkModeInfo;
@property (nonatomic) BOOL hasMultiPkModeInfo;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) BOOL showModeTab;

+ (id)descriptor;

@end
