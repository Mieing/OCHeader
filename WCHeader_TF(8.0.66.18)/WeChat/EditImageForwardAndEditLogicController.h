@class FavoritesItem, NSString, UIImage, CMessageWrap, EditImageAttr, MMLoadingView, UIViewController, EditImageIntialView, ForwardMessageLogicController, WCActionSheet;
@protocol EditImageForwardAndEditLogicDelegate;

@interface EditImageForwardAndEditLogicController : NSObject <EditImageInitialViewDelegate, ForwardMessageLogicDelegate, WCActionSheetDelegate, IMsgRevokeExt, IFavoritesExt> {
    EditImageIntialView *_editImageInitialView;
    MMLoadingView *_loadingView;
    EditImageAttr *_editImageAttr;
    ForwardMessageLogicController *_forwardMessageLogicController;
    FavoritesItem *_addingFavItem;
    WCActionSheet *_actionsheet;
    BOOL isImgSaved;
}

@property (weak, nonatomic) id<EditImageForwardAndEditLogicDelegate> delegate;
@property (retain, nonatomic) CMessageWrap *originalMessageWrap;
@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) NSString *originalImagePath;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) FavoritesItem *favItem;
@property (weak, nonatomic) UIViewController *forwardBasedViewController;
@property (nonatomic) unsigned long long editImageEntrance;
@property (nonatomic) int editImageScene;
@property (nonatomic) unsigned long long editImageCompletion;
@property (readonly, nonatomic) BOOL isSaved;
@property (nonatomic) BOOL isEmoticonBoardSearchEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOriginalImage:(id)a0 atPath:(id)a1 withDelegate:(id)a2 withCurrentViewController:(id)a3;
- (void)fillEditImageReportObjOriginMediaInfo;
- (void)checkValidity;
- (void)startLogic;
- (void)reloadViews;
- (void)startEditImage;
- (void)editImageActionSheetClickedButtonWithTitle:(id)a0;
- (void)callbackSaveImageSuccess;
- (void)checkNonActionsheetOptionsAfterProcessDone;
- (void)forwardMessage:(id)a0;
- (void)getDisplayImage:(id /* block */)a0;
- (void)getOriginalImage:(id /* block */)a0;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)processEditImage:(id /* block */)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (id)getEditImageAttr;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (void)OnAddNewFavoritesItems:(id)a0;
- (void).cxx_destruct;

@end
