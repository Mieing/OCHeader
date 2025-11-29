@class NSString, NSData;
@protocol EmoticonCustomCreateImageEditTaskDelegate;

@interface EmoticonCustomCreateImageEditTask : EmoticonCustomCreateEditTask <WCEditImageViewControllerDelegate>

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSData *imgData;
@property (weak, nonatomic) id<EmoticonCustomCreateImageEditTaskDelegate> delegate;
@property (copy, nonatomic) id /* block */ editSucBlock;
@property (copy, nonatomic) id /* block */ editCancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithImagePath:(id)a0;
- (id)initWithImageData:(id)a0;
- (void)startEdit;
- (void)openImageEditorWithFilePath:(id)a0;
- (void)openImageEditorWithData:(id)a0;
- (void)editImageViewController:(id)a0 didFinishEditingImage:(id)a1;
- (void)editImageViewControllerDidCancel:(id)a0;
- (void).cxx_destruct;

@end
