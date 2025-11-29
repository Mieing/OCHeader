@class IESIMShareMoreSelectionContext, NSString, AWEIMThirdPartShareSuccessView, IESIMContactPickerComponentContext;
@protocol IESIMShareMoreSelectionTrackAction, AWEIMShareTextViewProtocol, IESIMContactPickerSelectService;

@interface AWEIMShareSendTextBottomComponent : AWEIMComponentBase <AWEIMShareSendTextBottomComponentService>

@property (retain, nonatomic) id<AWEIMShareTextViewProtocol> inputView;
@property (retain, nonatomic) IESIMContactPickerComponentContext *pickerComponent;
@property (retain, nonatomic) IESIMShareMoreSelectionContext *selectionContext;
@property (weak, nonatomic) id<IESIMContactPickerSelectService> selectService;
@property (weak, nonatomic) id<IESIMShareMoreSelectionTrackAction> trackService;
@property (nonatomic) BOOL shouldTransferLater;
@property (retain, nonatomic) NSString *transferSchema;
@property (retain, nonatomic) AWEIMThirdPartShareSuccessView *thirdPartShareView;
@property (nonatomic) BOOL isSendingMessageToNewGroup;
@property (nonatomic) BOOL afterSendMsgNotHidePanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceDOUYINInterestSocialAdapterClass;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)aAFDServiceDOUYINInterestSocialAdapter;
- (void)sendMessageToGroupWithConvId:(id)a0 newCreate:(BOOL)a1 createGroupExtraInfo:(id)a2;
- (void)transferToChatAndShowShareSuccessViewLater:(BOOL)a0;
- (void)updateShareText:(id)a0;
- (id)currentShareText;
- (void)updateBottomButtonWithButtonTypes:(id)a0;
- (id)currentBottomButtonTypes;
- (void)sendMessageToShareList:(id)a0 textView:(id)a1 needCreateGroup:(BOOL)a2;
- (void)sendMessageToShareList:(id)a0 text:(id)a1 needCreateGroup:(BOOL)a2;
- (void)showThirdPartShareSuccessView:(id)a0 didChooseMultiple:(BOOL)a1;
- (void)transferToChat:(id)a0;
- (id)getIMThirdPartShareSuccessView;
- (id)getSelectedShareList;
- (id)p_currentAwemeModel;
- (BOOL)shouldSendMessageWithShareList:(id)a0;
- (void)startSendMessageWithShareContext:(id)a0 shareList:(id)a1 extraText:(id)a2 needCreateGroup:(BOOL)a3;
- (BOOL)needSendMessageWithCustomizedFunc;
- (void)customizedSendMessageWithShareList:(id)a0 extraText:(id)a1 needCreateGroup:(BOOL)a2;
- (void)doExtraOperationsAfterSendMessageWithShareList:(id)a0;
- (void)p_addExtraParamsForSendMessageResponseWithShareList:(id)a0 shareContext:(id)a1;
- (void)prepareTrackParamsBeforeSendMessageWithShareList:(id)a0;
- (void)p_didFinishShareWithShareList:(id)a0;
- (BOOL)p_checkIfSharedToSelf:(id)a0;
- (void)doFullScreenExtraOperationAfterSendMessageWithShareList:(id)a0;
- (void)updateTrackParamsBeforeSendWithShareList:(id)a0 text:(id)a1;
- (void)trackShareResultWithShareList:(id)a0 text:(id)a1;
- (id)commonParamWithShareModel:(id)a0;
- (void)didUpdateBottomButtonWithButtonTypes:(id)a0;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)a0;

@end
