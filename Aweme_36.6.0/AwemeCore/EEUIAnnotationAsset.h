@class EEUIAnnotationAssetUIMore, NSString, EEUIAnnotationParser;

@interface EEUIAnnotationAsset : EEUIAnnotationBase <EEUIAnnotationPrivate, EEUIAnnotation>

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationAsset> { struct UIAnnotationAsset *__ptr_; struct __shared_weak_count *__cntrl_; } annotationPtr;
@property (weak, nonatomic) EEUIAnnotationParser *annotationParser;
@property (retain, nonatomic) EEUIAnnotationAssetUIMore *uiMore;
@property (copy, nonatomic) NSString *stickerPath;
@property (copy, nonatomic) NSString *assetPath;
@property (copy, nonatomic) NSString *assetFolderName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int uiType;

+ (void)initClass;

- (void)updateForUrls:(id)a0 withType:(int)a1 success:(id /* block */)a2 andError:(id /* block */)a3;
- (void)updateForImages:(id)a0 withType:(int)a1 success:(id /* block */)a2 andError:(id /* block */)a3;
- (void)updateForVlExtra:(id)a0 withType:(int)a1 success:(id /* block */)a2 andError:(id /* block */)a3;
- (void)updateForFiles:(id)a0 withType:(int)a1 success:(id /* block */)a2 andError:(id /* block */)a3;
- (id)currentUIMoreContents;
- (void)updateValue:(id)a0 withType:(int)a1 success:(id /* block */)a2 andError:(id /* block */)a3;
- (int)refreshAnnotationPreview;
- (void)setStickerPath:(id)a0;
- (id)changedUIMoreContentsForOriginal;
- (id)changedUIMoreContentsForLast;
- (id)initWithAnnotationBasePtr:(const void *)a0 andAnnotationParser:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
