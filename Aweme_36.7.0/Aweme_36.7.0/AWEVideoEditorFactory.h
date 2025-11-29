@interface AWEVideoEditorFactory : NSObject

+ (id)videoEditorWithModel:(id)a0;
+ (id)videoEditorWithModel:(id)a0 playImmediately:(BOOL)a1;
+ (id)videoEditorWithModel:(id)a0 musicList:(id)a1 playImmediately:(BOOL)a2 cancelBlock:(id /* block */)a3;
+ (id)videoEditorWithModel:(id)a0 cancelBlock:(id /* block */)a1;
+ (id)videoEditorWithModel:(id)a0 showGuideBubble:(BOOL)a1 playImmediately:(BOOL)a2 cancelBlock:(id /* block */)a3;
+ (id)videoEditorWithModel:(id)a0 musicList:(id)a1 showGuideBubble:(BOOL)a2 playImmediately:(BOOL)a3 cancelBlock:(id /* block */)a4;
+ (id)p_featureTypesFromFeatureEditor:(id)a0;
+ (id)videoEditorWithModel:(id)a0 showGuideBubble:(BOOL)a1;
+ (id)openEditorWithModel:(id)a0;

@end
