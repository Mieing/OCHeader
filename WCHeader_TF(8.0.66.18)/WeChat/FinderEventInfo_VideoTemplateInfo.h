@class NSString, FinderEventInfo_TemplateVersionInfo;

@interface FinderEventInfo_VideoTemplateInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventInfo_TemplateVersionInfo *tmplVersionInfo;
@property (nonatomic) unsigned int tmplType;
@property (retain, nonatomic) NSString *cameraTmplId;
@property (nonatomic) unsigned int permittedPublishMethodFlag;
@property (nonatomic) unsigned int cameraPosition;
@property (nonatomic) unsigned int disableShowNoTmpl;
@property (nonatomic) unsigned int disableShowMoreTmpl;
@property (nonatomic) unsigned int disableShowFromAlbum;

+ (void)initialize;

@end
