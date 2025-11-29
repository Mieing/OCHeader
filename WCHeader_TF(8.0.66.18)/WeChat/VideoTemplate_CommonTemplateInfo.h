@class NSString;

@interface VideoTemplate_CommonTemplateInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int usageCount;
@property (retain, nonatomic) NSString *tplMessage;
@property (retain, nonatomic) NSString *previewCovelUrl;
@property (retain, nonatomic) NSString *previewVideoUrl;
@property (retain, nonatomic) NSString *tmplDescUrl;
@property (nonatomic) unsigned int tmplDescVersion;
@property (retain, nonatomic) NSString *tmplDescWording;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned int coverUrlWidth;
@property (nonatomic) unsigned int coverUrlHeight;

+ (void)initialize;

@end
