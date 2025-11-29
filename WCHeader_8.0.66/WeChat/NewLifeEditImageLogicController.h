@class MMLoadingView, NSString, EditImageIntialView, UIImage, MMAsset, UIViewController;
@protocol NewLifeEditImageLogicControllerDelegate;

@interface NewLifeEditImageLogicController : NSObject <EditImageInitialViewDelegate>

@property (retain, nonatomic) EditImageIntialView *editImageInitialView;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) MMAsset *asset;
@property (retain, nonatomic) UIImage *originalImage;
@property (weak, nonatomic) id<NewLifeEditImageLogicControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startEditImageFromViewController:(id)a0;
- (void)realStartEditImageFromViewController:(id)a0;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)getDisplayImage:(id /* block */)a0;
- (void)getOriginalImage:(id /* block */)a0;
- (void).cxx_destruct;

@end
