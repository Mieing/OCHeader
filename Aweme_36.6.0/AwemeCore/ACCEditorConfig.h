@class ACCEditorControlConfigAssembler, NSString, ACCEditorStickerConfigAssembler, AWEVideoPublishViewModel, NSError, ACCEditorMusicConfigAssembler;
@protocol AWEVideoConfigAssembler;

@interface ACCEditorConfig : NSObject <ACCParamteriedTaskService>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly, nonatomic) ACCEditorStickerConfigAssembler *stickerConfigAssembler;
@property (readonly, nonatomic) ACCEditorMusicConfigAssembler *musicConfigAssembler;
@property (retain, nonatomic) id<AWEVideoConfigAssembler> videoConfigAssembler;
@property (readonly, nonatomic) ACCEditorControlConfigAssembler *flowControlConfigAssembler;
@property (retain, nonatomic) NSError *lastError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editorConfigWithPublishModelAndEnsurePublishModelIsConfiged:(id)a0;

- (id)initWithPublishModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (void)p_updateLastError:(id)a0;
- (void)paramteriedRunAsyncTaskWithGroup:(id)a0;
- (void).cxx_destruct;

@end
