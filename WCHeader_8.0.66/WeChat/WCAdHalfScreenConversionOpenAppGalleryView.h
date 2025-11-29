@class WCAdSchemaJumpInfo, MMUILabel, WCAdAppImageGalleryView, FixTitleColorButton, MMUIButton, WCAdURLImageView;

@interface WCAdHalfScreenConversionOpenAppGalleryView : MMPageSheetBaseView

@property (retain, nonatomic) WCAdSchemaJumpInfo *schemaJumpInfo;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) WCAdURLImageView *appIconView;
@property (retain, nonatomic) MMUILabel *appNameView;
@property (retain, nonatomic) MMUILabel *appDescView;
@property (retain, nonatomic) WCAdAppImageGalleryView *appImageGalleryView;
@property (retain, nonatomic) FixTitleColorButton *confirmButtonView;
@property (retain, nonatomic) MMUIButton *maskButtonView;

- (id)initWithSchemaJumpInfo:(id)a0 resultBlock:(id /* block */)a1;
- (void)initCommonUI;
- (void)initDetailUI;
- (id)createLabel:(id)a0 height:(double)a1 font:(id)a2 textColor:(id)a3;
- (void)onConfirmButtonClick:(id)a0;
- (void)directLaunchAppWithDeeplink;
- (void)directLaunchAppWithUlink;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
