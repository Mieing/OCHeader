@class IESLiveShowAnchorColumnPosterDialogParamModel, IESLiveWebpLoadingView, UIView;

@interface IESLiveShowAnchorShareImageView : UIView

@property (retain, nonatomic) UIView *shareContainerView;
@property (retain, nonatomic) IESLiveShowAnchorColumnPosterDialogParamModel *model;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;

- (void)saveToPhotoLibrary;
- (void)saveImageToLibraryWithImage:(id)a0;
- (id)initWithModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)showInView:(id)a0;
- (void)setupUI;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
