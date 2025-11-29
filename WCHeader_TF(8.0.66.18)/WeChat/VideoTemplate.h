@class VideoTemplate_VersionInfo, NSString, VideoTemplate_AlbumTemplateInfo, VideoTemplate_CommonTemplateInfo, VideoTemplate_CameraTemplateInfo, NSData, VideoTemplate_DynamicInfo, VideoTemplate_FinderUserInfo, VideoTemplate_EventTopicInfo;

@interface VideoTemplate : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int sdkVersion;
@property (retain, nonatomic) VideoTemplate_CommonTemplateInfo *commonTplInfo;
@property (retain, nonatomic) VideoTemplate_CameraTemplateInfo *cameraTplInfo;
@property (retain, nonatomic) VideoTemplate_AlbumTemplateInfo *albumTplInfo;
@property (retain, nonatomic) VideoTemplate_DynamicInfo *dynamicInfo;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) VideoTemplate_VersionInfo *versionInfo;
@property (retain, nonatomic) VideoTemplate_EventTopicInfo *eventTopicInfo;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *finderVideoTemplateInfo;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSString *aiModelType;
@property (retain, nonatomic) VideoTemplate_FinderUserInfo *finderUserInfo;

+ (void)initialize;

@end
