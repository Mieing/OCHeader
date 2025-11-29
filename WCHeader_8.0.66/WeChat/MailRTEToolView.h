@class UINavigationController, NSString, MMUIView, UIView, NSMutableArray, MMPickLocationViewController;
@protocol MailRTEToolViewDelegate;

@interface MailRTEToolView : UIView <MMPickLocationViewControllerDelegate, MMTipsViewControllerDelegate> {
    MMUIView *_basicBtnContainer;
    MMUIView *_extBtnContainer;
    UIView *_tabLine;
    UINavigationController *_picker;
}

@property (nonatomic) unsigned int mmassetCount;
@property (retain, nonatomic) NSMutableArray *arrAttachments;
@property (retain, nonatomic) MMPickLocationViewController *locationViewCtrl;
@property (weak, nonatomic) id<MailRTEToolViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initUI;
- (void)initBasicView;
- (void)showBasicView;
- (id)getTitle:(int)a0;
- (id)getIconName:(int)a0;
- (id)getIconSelectedName:(int)a0;
- (void)onClickItem:(id)a0;
- (unsigned int)checkExceedMaxObjectCountAndAlert:(unsigned int)a0;
- (void)onCreatePostImageView:(unsigned int)a0;
- (void)onTakePhotoForPost;
- (void)showImagePicker:(long long)a0 withAvailableCount:(unsigned int)a1;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onAddImageItemComplete;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void).cxx_destruct;

@end
