@class NSString;

@interface EcsBatchGetLiveInfoResp_EcsLiveInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int liveStatus;
@property (retain, nonatomic) NSString *description;
@property (nonatomic) BOOL isViolation;
@property (retain, nonatomic) NSString *exportId;

+ (void)initialize;

@end
