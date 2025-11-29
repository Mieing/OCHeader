@class NSString;

@interface AWEECOMIMRabbiFlyActionHandler : NSObject <BDECRabbiFlyIActionHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setOpenWindowAndRefresh:(id)a0;
+ (id)templateActionTypeList;
+ (void)handleAction:(id)a0 actionType:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)firstHandleAction:(id)a0 actionType:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleClickResultBegin:(id)a0 clickUUID:(id)a1 actionType:(id)a2 params:(id)a3;
+ (void)handleClickResultAppend:(id)a0 clickUUID:(id)a1 actionTypeList:(id)a2;
+ (void)trackTemplateCardBtnTap:(id)a0 actionType:(id)a1 params:(id)a2;
+ (void)secondHandleAction:(id)a0 clickUUID:(id)a1 actionType:(id)a2 params:(id)a3 completion:(id /* block */)a4;
+ (void)handleClickResultEnd:(id)a0 clickUUID:(id)a1 actionType:(id)a2 code:(long long)a3 errMsg:(id)a4;
+ (void)handleInvokeActionGroup:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleOpenWindow:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleOpenMultiSku:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleToast:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleOpenSchema:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleTracker:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleFetch:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleActionList:(id)a0 clickUUID:(id)a1 actionList:(id)a2 params:(id)a3 completion:(id /* block */)a4;
+ (id)btmPageIdWithView:(id)a0;
+ (id)unitBtmIdWithBtmCid:(id)a0 btmDid:(id)a1 btmPageId:(id)a2;
+ (id)msgCellWithView:(id)a0;
+ (void)openWindowWithWindowUrl:(id)a0 unitBtmId:(id)a1 host:(id)a2 bcm:(id)a3;
+ (id)targetViewWithView:(id)a0 targetClass:(Class)a1;
+ (id)clickResultProvider:(id)a0;
+ (id)targetViewWithView:(id)a0 targetProtocol:(id)a1;
+ (id)actionTypeList;
+ (void)handleCopyToClipboard:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleSetStorageItem:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleGetStorageItem:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleCallPhone:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleGallery:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleUploadImage:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleTakePhoto:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)handleConfirm:(id)a0 clickUUID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (id)sharedInstance;

- (void)handleAction:(id)a0 action:(id)a1 callback:(id /* block */)a2;

@end
