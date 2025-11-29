@class NSString, NSMutableDictionary, AWEIMEmoticonPanelTabInitContext;

@interface IESIMInputEmoticonBusinessComponent : AWEIMComponentBase <IESIMInputEmoticonBusinessInterface, IESIMInputEmotionComponentAction, IESIMInputLayoutAction, AWEIMMessageListPerformSchemaMessage>

@property (retain, nonatomic) NSMutableDictionary *scrollToEnterMethod;
@property (retain, nonatomic) AWEIMEmoticonPanelTabInitContext *tabInitContext;
@property (nonatomic) BOOL needDefaultEmotionIconPanelOnly;
@property (nonatomic) double emoticonExtraHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1 theme:(id)a2 themeView:(id)a3 indexPath:(id)a4;
- (void)emoticonViewDidSelectDelete:(id)a0;
- (void)emoticonViewDidSendText:(id)a0;
- (void)emoticonViewDidChangedSeletedInfoModel:(id)a0;
- (void)emoticonViewDidSelectTabSearch:(id)a0;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)sendHeartEmoji;
- (void)scrollToEmoticonUniqueId:(id)a0 animated:(BOOL)a1 enterMethod:(id)a2;
- (void)emoticonBtnClicked:(id)a0;
- (long long)pp_fontSize;
- (BOOL)shouldDisableSendWhileAIReplyingWithToast:(BOOL)a0;
- (id)composeIMEmoticonInfoModels;
- (void)insertEmoticonWithEmoticonString:(id)a0;
- (id)enterFromInChat;
- (void)performEmojiSchema;
- (void)emoticonPanelPanGesHandler:(id)a0;
- (void)emoticonPanelTapGesHandler:(id)a0;
- (void)triggerLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputBarHeight:(double)a1 animated:(BOOL)a2 refreshContext:(id)a3;
- (BOOL)shouldShowEmoticonButton;
- (void).cxx_destruct;

@end
