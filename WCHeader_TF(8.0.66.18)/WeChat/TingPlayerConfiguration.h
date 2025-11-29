@interface TingPlayerConfiguration : NSObject

@property (nonatomic) BOOL ignoreVideoDecodeError;
@property (nonatomic) BOOL takeOverDownload;
@property (nonatomic) BOOL isAuditoryEnhEnable;
@property (nonatomic) int auditoryEnhMode;
@property (nonatomic) BOOL isTPAudioMixTtsEnable;
@property (nonatomic) BOOL isHearingAidEnable;
@property (nonatomic) BOOL isHearingTtsScene;
@property (nonatomic) int hearingAidType;
@property (nonatomic) int hearingAidDevice;

@end
