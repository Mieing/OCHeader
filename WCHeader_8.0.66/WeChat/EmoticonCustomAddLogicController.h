@class EmoticonCustomManageAddLogic, NSString, MMUIViewController, EmoticonCameraReportObject, AddEmoticonWrap, EmoticonCheckCameraFollowLogic;
@protocol EmoticonCustomAddLogicControllerDelegate, MMUIViewControllerDelegate;

@interface EmoticonCustomAddLogicController : NSObject <MMUIViewControllerDelegate, EmoticonCameraDelegate, WCActionSheetDelegate, EmoticonCustomManageAddLogicDelegate> {
    MMUIViewController *m_tmpViewController;
    EmoticonCameraReportObject *m_reportObject;
    AddEmoticonWrap *m_addEmoticonWrap;
    BOOL m_needAsyncUpload;
}

@property (retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic;
@property (retain, nonatomic) EmoticonCheckCameraFollowLogic *checkCameraFollowLogic;
@property (weak, nonatomic) id<MMUIViewControllerDelegate> vcDelegate;
@property (weak, nonatomic) id<EmoticonCustomAddLogicControllerDelegate> delegate;
@property (nonatomic) BOOL useNewSnackStyle;
@property (nonatomic) BOOL disableAutoShowSucToast;
@property (nonatomic) unsigned long long recentPulledByCameraEmoticonLabelTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowEmoticonCameraEntrance;
+ (BOOL)shouldShowEmoticonCameraFollow;
+ (BOOL)shouldEnableEmoticonCameraNewYearPendant;
+ (BOOL)shouldForbiddenEmoticonCameraNewYearPendantMessageTail;
+ (BOOL)isEmoticonCameraSceneRedEnvelope:(unsigned int)a0;
+ (id)localizedStringForEmoticonAsyncUploadOperate:(unsigned long long)a0;
+ (SEL)selectorForEmoticonAsyncUploadOperate:(unsigned long long)a0;

- (BOOL)showTakePhotoWithModel:(id)a0;
- (BOOL)realDoTakePhotoWithModel:(id)a0;
- (void)DismissModalViewControllerAnimated:(BOOL)a0;
- (void)DismissModalViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)startExchangePackAndAddEmoticonWithWrap:(id)a0;
- (BOOL)startAddEmoticonWithWrap:(id)a0;
- (BOOL)deleteEmoticonWithWrap:(id)a0;
- (void)handleEmoticonAsyncUploadWithWrap:(id)a0;
- (void)onReuploadButtonClick;
- (void)onDeleteButtonClick;
- (id)getViewController;
- (void)onEmoticonCameraDidTakeImgWithUploadInfo:(id)a0 viewController:(id)a1;
- (void)AddEmoticonFinishedWithWrap:(id)a0 IsSuccessed:(BOOL)a1;
- (void)onAddEmoticonPendingUploadWithWrap:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)handleGIFInfo:(id)a0;
- (void)handleEmoticonUploadInfo:(id)a0 source:(int)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onEmoticonCameraClose;
- (void).cxx_destruct;

@end
