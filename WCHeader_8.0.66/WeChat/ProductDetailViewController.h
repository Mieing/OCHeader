@class UIView, NSString, UIImage, MMWebImageView, SendAppMsgHandler, UIImageView, ScanProductItem, UIButton, ProductDetailLogicHelper, ProductTableView;
@protocol ProductDetailViewControllerDelegate;

@interface ProductDetailViewController : MMUIViewController <MMWebImageViewDelegate, ProductDetailLogicHelperDelegate, ProductTableViewDelegate, WCActionSheetDelegate, SendAppMsgHandleDelegate, IScanBookMgrExt> {
    UIView *_infoView;
    double _infoViewHeight;
    MMWebImageView *_infoBgView;
    UIImageView *_blurView;
    UIImage *_snapShotImg;
    UIView *_maskView;
    MMWebImageView *_thumbImgView;
    UIButton *_containView;
    ScanProductItem *_productItem;
    NSString *_qrcodeUrl;
    ProductTableView *_productTableView;
    SendAppMsgHandler *_sendAppMsgHandler;
    ProductDetailLogicHelper *_logicHelper;
    unsigned int _fromScene;
    UIImageView *_disclosureBtn;
    int _functionType;
    double beginTime;
}

@property (nonatomic) BOOL canShareToFriend;
@property (nonatomic) BOOL canShareToWC;
@property (nonatomic) BOOL canAddToFav;
@property (nonatomic) BOOL canEditTag;
@property (nonatomic) BOOL canDelete;
@property (weak, nonatomic) id<ProductDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScanItem:(id)a0 FunctionType:(int)a1;
- (id)initWithExtContent:(id)a0 Scence:(unsigned int)a1;
- (void)startAsyncGetActionInfo;
- (void)OnGetRemoteProductItem:(id)a0 QRCodeUrl:(id)a1 Error:(int)a2;
- (void)onAsyncDataRefreshed:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (void)initInfoView;
- (void)headerTouchDown:(id)a0;
- (void)headerTouchUp:(id)a0;
- (void)initTableView;
- (void)setTableFooterView;
- (unsigned int)getGetA8KeyScenceFromFunctionType;
- (unsigned int)getJumpProfileScenceFromFunctionType;
- (void)initView;
- (void)OnReturn;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)onIntroTitleClick;
- (void)onExposeClick;
- (void)onHeaderClick;
- (void)onCertificationClick;
- (void)onAction:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)getUpLoadTask:(id)a0;
- (id)getMessageWrap:(id)a0;
- (id)getThumbImageData;
- (void)updateInfoViewSnapshot;
- (void)onProuductTableViewDidScroll:(id)a0;
- (void)OnSendAppMsgOKToContacts:(id)a0;
- (void)onDeleteProduct;
- (void)onEditProductTag;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
