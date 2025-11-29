@class NSString;

@interface AWEPCTNoteTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (void)executeWithContext:(id)a0 task:(id)a1 finishHandler:(id /* block */)a2;
+ (BOOL)enableEnterNoteAlbumWithContext:(id)a0;
+ (BOOL)enableLokiEffectTemplate;
+ (void)handleLokiEffectTemplateWithContext:(id)a0 templateId:(id)a1 finishHandler:(id /* block */)a2;
+ (void)enterImageAlbumNoteAlbumWithContext:(id)a0 finishHandler:(id /* block */)a1;
+ (BOOL)enablePixelTemplate;
+ (void)handlePixelTemplateWithContext:(id)a0 templateId:(id)a1 finishHandler:(id /* block */)a2;
+ (id)albumConfigWithContext:(id)a0;


@end
