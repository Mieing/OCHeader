@class WANativeViewTexture, NSString;

@interface WANativeView : UIView <WANativeViewTextureInterface>

@property (nonatomic) BOOL nativeViewUseTexture;
@property (retain) WANativeViewTexture *nativeViewTexture;
@property (nonatomic) unsigned int viewId;
@property (retain, nonatomic) NSString *data;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int webviewID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleCommonParam:(id)a0;
- (id)onInsertWithParam:(id)a0;
- (id)onUpdateWithParam:(id)a0;
- (id)onRemoveWithParam:(id)a0;
- (void)sendEventToJs:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
