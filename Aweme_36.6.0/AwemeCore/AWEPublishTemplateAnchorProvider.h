@class NSString;

@interface AWEPublishTemplateAnchorProvider : NSObject <ACCPublishAnchorProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isImageTemplateAnchor:(id)a0;
+ (id)mvIDWithPublishModel:(id)a0;
+ (BOOL)isUploadTemplate:(id)a0;
+ (id)sceneWithPublishModel:(id)a0;
+ (long long)mvTypeWithPublishModel:(id)a0 mvID:(id)a1;
+ (id)miscInfoDictWithPublishModel:(id)a0;

- (void)setAnchorInfoIfNeeded:(id)a0;

@end
