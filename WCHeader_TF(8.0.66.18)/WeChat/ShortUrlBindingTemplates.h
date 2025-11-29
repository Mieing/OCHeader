@class NSString, ShortUrlBindingTemplates_VersionInfo;

@interface ShortUrlBindingTemplates : WXPBGeneratedMessage

@property (nonatomic) unsigned int wxUin;
@property (nonatomic) unsigned long long finderUin;
@property (retain, nonatomic) NSString *tmplId;
@property (retain, nonatomic) NSString *tmplCdnUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *previewCovelUrl;
@property (retain, nonatomic) ShortUrlBindingTemplates_VersionInfo *versionInfo;

+ (void)initialize;

@end
