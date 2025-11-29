@class NSString;
@protocol AEKTemplateEditorDelegate, AEKTemplateData;

@interface AEKTemplateEditorImpl : AEKBaseRenderEditor <AEKTemplateEditor>

@property (weak, nonatomic) id<AEKTemplateEditorDelegate> delegate;
@property (readonly, nonatomic) id<AEKTemplateData> templateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nleModel;
- (id)templateOperator;
- (id)npApplyTargetWith:(id)a0;
- (id)applyTemplateWithResource:(id)a0 preset:(id)a1 target:(id)a2 preprocessConfig:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
