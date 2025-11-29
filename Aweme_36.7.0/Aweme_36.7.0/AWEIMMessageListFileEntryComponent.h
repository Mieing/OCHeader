@class UIColor, NSString, AWEIMChatPanelModel, UIImage;

@interface AWEIMMessageListFileEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry, UIDocumentPickerDelegate>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (retain, nonatomic) UIColor *tabBarTintColor;
@property (retain, nonatomic) UIColor *tabBarBarTintColor;
@property (retain, nonatomic) UIImage *tabBarBackgroundImage;
@property (retain, nonatomic) UIImage *tabBarShadowImage;
@property (retain, nonatomic) UIColor *barButtonItemTintColor;
@property (readonly, nonatomic) long long fileLimitCount;
@property (readonly, nonatomic) long long fileLimitSize;
@property (nonatomic) BOOL isSelectingDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (BOOL)canShowDecidedBySettingsWithContext:(id)a0;
- (void)p_showLimitCountAlert;
- (id)p_makeMetaInfoFromURL:(id)a0;
- (void)p_showLimitSizeAlert;
- (void)p_showLimitTypeAlert;
- (id)p_processFileItem:(id)a0;
- (void)p_onClickAction;
- (void)p_documentSelectBegin;
- (void)p_documentSelectEnd;
- (void)p_sendFileMessage:(id)a0;
- (void)p_changeSystemTabBarStyle;
- (void)p_resetTabBarStyle;
- (void).cxx_destruct;
- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;

@end
