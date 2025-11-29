@class NSString;

@interface AWEPublishEffectAnchorProvider : NSObject <ACCPublishAnchorProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAIEffectAnchor:(id)a0;
+ (BOOL)isImageTemplateEffectAnchor:(id)a0;
+ (BOOL)isUploadEffectAnchor:(id)a0;
+ (id)sceneWithPublishModel:(id)a0;
+ (id)imageTemplateEffectIds:(id)a0;
+ (id)stickerID:(id)a0;

- (void)setAnchorInfoIfNeeded:(id)a0;
- (id)anchorTag:(id)a0 isImageTemplateEffect:(BOOL)a1;
- (id)anchorContent:(id)a0;

@end
