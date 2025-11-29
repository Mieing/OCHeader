@class NSString, UIView, SystemImagePickViewController, FlutterMethodChannel;

@interface LiteAppAlbumView : NSObject <FlutterPlatformView, SystemImagePickViewControllerDelegate> {
    UIView *_view;
    FlutterMethodChannel *_channel;
    SystemImagePickViewController *vc;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2 binaryMessenger:(id)a3 methodChannel:(id)a4;
- (id)view;
- (void)onClickAsset:(id)a0;
- (void)onChangeAsset:(id)a0;
- (void)onAlbumChange:(id)a0;
- (void)onAlbumFinish:(id)a0;
- (void).cxx_destruct;

@end
