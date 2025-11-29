@class MPPageDownloadedTemplateRecord, MPPageTemplateInfo;

@interface MPPageDownloadingTemplateInfo : NSObject

@property (retain, nonatomic) MPPageTemplateInfo *templateInfo;
@property (retain, nonatomic) MPPageDownloadedTemplateRecord *record;
@property (nonatomic) BOOL isInvalid;
@property (nonatomic) unsigned int scene;

- (void).cxx_destruct;

@end
