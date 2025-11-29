@class NSString;

@interface CreateInfoResponse_ConfigInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL supportMicroAppNewSlot;
@property (copy, nonatomic) NSString *pcLiveLynxSchema;
@property (nonatomic) BOOL hideAdmin;
@property (copy, nonatomic) NSString *customerServiceSchema;
@property (nonatomic) BOOL showRedEnvelope;
@property (copy, nonatomic) NSString *redEnvelopeSchema;
@property (nonatomic) int showUserCardSwitchVersion;
@property (copy, nonatomic) NSString *audienceAnonymitySwitch;
@property (nonatomic) BOOL cameraDirectorNeedPolling;

+ (id)descriptor;

@end
