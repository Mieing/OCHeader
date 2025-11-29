@class NSString;
@protocol EmoticonCustomCreateVideoEditTaskDelegate;

@interface EmoticonCustomCreateVideoEditTask : EmoticonCustomCreateEditTask <WCEditVideoViewControllerDelegate>

@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) NSString *thumbImgUrl;
@property (weak, nonatomic) id<EmoticonCustomCreateVideoEditTaskDelegate> delegate;
@property (copy, nonatomic) id /* block */ editCancelBlock;
@property (copy, nonatomic) id /* block */ startComposingBlock;
@property (copy, nonatomic) id /* block */ composingFailBlock;
@property (copy, nonatomic) id /* block */ composingSucBlock;
@property (nonatomic) unsigned long long editorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithVideoPath:(id)a0;
- (id)initWithThumbImgUrl:(id)a0;
- (void)startEdit;
- (id)getVideoEditorWithPath:(id)a0;
- (id)getVideoEditorWithThumbImgUrl:(id)a0;
- (id)editorUIConfigWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getVideoEditorWith:(id)a0 videoPath:(id)a1 thumbUrl:(id)a2 videoSize:(struct CGSize { double x0; double x1; })a3;
- (void)editVideoViewController:(id)a0 didFinishEditingVideo:(id)a1;
- (void)editVideoViewControllerDidCancel:(id)a0;
- (void).cxx_destruct;

@end
