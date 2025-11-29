@class PHAsset, UIViewController, AWEIMPhotoPickerModel;
@protocol AWEIMMediaEditorProxyDelegate;

@interface AWEIMMediaEditorProxy : NSObject

@property (weak, nonatomic) PHAsset *asset;
@property (weak, nonatomic) UIViewController *host;
@property (weak, nonatomic) id<AWEIMMediaEditorProxyDelegate> delegate;
@property (weak, nonatomic) AWEIMPhotoPickerModel *pickerModel;
@property (nonatomic) BOOL disableVideo;
@property (nonatomic) BOOL fromIMAlbum;

- (void)onReceiveEditedMediaWithPath:(id)a0 userInfo:(id)a1;
- (id)p_imModelForAsset:(id)a0;
- (id)p_sourceModelForAsset:(id)a0;
- (void)p_onReceiveEditedMediaFromIMAlbum;
- (void)pushMediaEditorViewController;
- (void).cxx_destruct;
- (id)init;

@end
