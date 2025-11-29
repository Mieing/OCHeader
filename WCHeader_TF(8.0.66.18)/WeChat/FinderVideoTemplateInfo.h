@class FinderVideoTemplateInfo_SecurityAuditInfo, NSString, FinderVideoTemplateInfo_TraitsInfo, FinderVideoTemplateInfo_VersionInfo, FinderVideoTemplateInfo_MusicInfo;

@interface FinderVideoTemplateInfo : WXPBGeneratedMessage <YYModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int sdkVersion;
@property (nonatomic) unsigned int usageCount;
@property (nonatomic) unsigned int entranceSource;
@property (retain, nonatomic) FinderVideoTemplateInfo_VersionInfo *versionInfo;
@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) FinderVideoTemplateInfo_SecurityAuditInfo *auditInfo;
@property (retain, nonatomic) NSString *fromAppTempId;
@property (nonatomic) unsigned int cameraPosition;
@property (nonatomic) unsigned long long tmplTopicId;
@property (nonatomic) unsigned int originalSoundSwitch;
@property (nonatomic) unsigned int clientCameraPosition;
@property (retain, nonatomic) NSString *eventCreatorNickname;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *followObjectId;
@property (nonatomic) unsigned int followObjectCheckBox;
@property (retain, nonatomic) FinderVideoTemplateInfo_TraitsInfo *traitsInfo;
@property (retain, nonatomic) FinderVideoTemplateInfo_MusicInfo *musicInfo;
@property (nonatomic) unsigned int videoSource;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)cutSameInfoWithTemplateId:(id)a0 musicId:(id)a1 type:(unsigned int)a2;
+ (void)initialize;

- (void)setVideoSource:(unsigned int)a0;
- (unsigned int)videoSource;
- (void)setMusicInfo:(id)a0;
- (id)musicInfo;
- (void)setTraitsInfo:(id)a0;
- (id)traitsInfo;
- (void)setFollowObjectCheckBox:(unsigned int)a0;
- (unsigned int)followObjectCheckBox;
- (void)setFollowObjectId:(id)a0;
- (id)followObjectId;
- (void)setEventName:(id)a0;
- (id)eventName;
- (void)setEventCreatorNickname:(id)a0;
- (id)eventCreatorNickname;
- (void)setClientCameraPosition:(unsigned int)a0;
- (unsigned int)clientCameraPosition;
- (void)setOriginalSoundSwitch:(unsigned int)a0;
- (unsigned int)originalSoundSwitch;
- (void)setTmplTopicId:(unsigned long long)a0;
- (unsigned long long)tmplTopicId;
- (void)setCameraPosition:(unsigned int)a0;
- (unsigned int)cameraPosition;
- (void)setFromAppTempId:(id)a0;
- (id)fromAppTempId;
- (void)setAuditInfo:(id)a0;
- (id)auditInfo;
- (void)setMusicId:(id)a0;
- (id)musicId;
- (void)setVersionInfo:(id)a0;
- (id)versionInfo;
- (void)setEntranceSource:(unsigned int)a0;
- (unsigned int)entranceSource;
- (void)setUsageCount:(unsigned int)a0;
- (unsigned int)usageCount;
- (void)setSdkVersion:(unsigned int)a0;
- (unsigned int)sdkVersion;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setId:(id)a0;
- (id)id;
- (BOOL)isCameraPositionNotSet;
- (BOOL)isOriginalSoundSwitchNotSet;
- (BOOL)isClientCameraPositionNotSet;
- (BOOL)canShowTemplateEntry;

@end
