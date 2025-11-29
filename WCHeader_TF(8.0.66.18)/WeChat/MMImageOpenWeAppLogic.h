@class MMUIViewController, NSString, UIImage, QRCodeInMultiDisplayView, MMImageActionOpenWeAppListItem, ScanQRCodeDataUsedInMultiCode, NSMutableArray, ScanQRCodeLogicController;
@protocol MMImageOpenWeAppDelegate;

@interface MMImageOpenWeAppLogic : NSObject <MMActionSheetQRCodeRowViewDelegate, WAWxMaterialRefreshExt, QRCodeInMultiDisplayViewDelegate, BaseScanLogicDelegate>

@property (retain, nonatomic) QRCodeInMultiDisplayView *qrCodeMultiView;
@property (retain, nonatomic) ScanQRCodeLogicController *scanQRCodeLogic;
@property (retain, nonatomic) MMImageActionOpenWeAppListItem *openWeAppList;
@property (retain, nonatomic) NSMutableArray *openWeAppItemList;
@property (nonatomic) BOOL haveMaterialButton;
@property (retain, nonatomic) NSString *materialFileExt;
@property (retain, nonatomic) NSString *imagePath;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) MMUIViewController *curViewController;
@property (nonatomic) BOOL disable;
@property (retain, nonatomic) ScanQRCodeDataUsedInMultiCode *detectMultiCodeData;
@property (weak, nonatomic) id<MMImageOpenWeAppDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0;
- (void)dealloc;
- (void)updateWithScanParams:(id)a0;
- (id)qrCodeRowView;
- (void)tryScanImage:(id)a0 imagePath:(id)a1;
- (void)onTappedRowInfo:(id)a0;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)refreshWAWxMaterialAppInfo:(id)a0;
- (void)onCancelBtnClicked:(id)a0;
- (void)onDotViewClicked:(id)a0;
- (void)onSelectMarkDotInfo:(id)a0;
- (void)dismissQRCodeMultiView;
- (void)tryAddWAOpenWxMaterialButtonWhenPopMenu:(BOOL)a0;
- (BOOL)addWAOpenWxMaterialButton:(id)a0;
- (void)onScanEnds;
- (void)onGetA8KeyResultType:(unsigned int)a0;
- (void).cxx_destruct;

@end
