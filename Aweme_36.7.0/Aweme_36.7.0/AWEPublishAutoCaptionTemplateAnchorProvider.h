@class NSString;

@interface AWEPublishAutoCaptionTemplateAnchorProvider : NSObject <ACCPublishAnchorProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoCaptionTemplateId:(id)a0;
+ (id)sceneWithPublishModel:(id)a0;
+ (BOOL)isUploadAnchorWithPublishModel:(id)a0;

- (void)setAnchorInfoIfNeeded:(id)a0;
- (id)autoCaptionTemplateId:(id)a0;
- (id)autoCaptionTemplateName:(id)a0;

@end
