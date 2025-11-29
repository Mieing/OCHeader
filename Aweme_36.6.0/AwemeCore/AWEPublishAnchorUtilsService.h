@class NSString;

@interface AWEPublishAnchorUtilsService : NSObject <ACCPublishAnchorUtilsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldIgnoreUploadPropId:(id)a0;
- (BOOL)isSourceInfoAnchor:(id)a0;
- (BOOL)isAIEffectAnchor:(id)a0;
- (BOOL)isImageTemplateEffectAnchor:(id)a0;
- (BOOL)isImageTemplateAnchor:(id)a0;
- (BOOL)isUploadEffectAnchor:(id)a0;
- (BOOL)enable:(id)a0;

@end
