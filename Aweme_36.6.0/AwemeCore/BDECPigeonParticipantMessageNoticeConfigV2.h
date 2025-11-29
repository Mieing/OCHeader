@class NSString;

@interface BDECPigeonParticipantMessageNoticeConfigV2 : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL taskbarAlert;
@property (nonatomic) BOOL popAlert;
@property (nonatomic) BOOL voiceAlert;
@property (copy, nonatomic) NSString *voiceFilePath;
@property (copy, nonatomic) NSString *voiceAlertId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
