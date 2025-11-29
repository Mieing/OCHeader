@class AWEIMEmoticonRootComponent, NSDictionary, NSString, AWEIMEmoticonPanelContext;
@protocol AWEIMEmoticonTabDataComponent, AWEIMEmoticonActionComponent, AWEIMEmoticonPanelSyncComponent, AWEIMEmoticonPanelBoxComponent, AWEIMEmoticonKeyBoardDelegate, AWEIMEmoticonDeleteSendComponent, AWEIMEmoticonTrackComponent, AWEIMEmoticonTransitionComponent;

@interface AWEIMEmoticonPanelContainerView : UIView <AWEIMEmoticonContainerViewProtocol>

@property (retain, nonatomic) AWEIMEmoticonPanelContext *context;
@property (retain, nonatomic) AWEIMEmoticonRootComponent *rootComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPanelBoxComponent> boxComponent;
@property (weak, nonatomic) id<AWEIMEmoticonTrackComponent> trackComponent;
@property (weak, nonatomic) id<AWEIMEmoticonActionComponent> actionComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (weak, nonatomic) id<AWEIMEmoticonDeleteSendComponent> deleteSendComponent;
@property (weak, nonatomic) id<AWEIMEmoticonTransitionComponent> transitionComponent;
@property (weak, nonatomic) id<AWEIMEmoticonTabDataComponent> tabDataComponent;
@property (nonatomic) BOOL firstLayoutOpt;
@property (nonatomic) BOOL isFirstLayouted;
@property (nonatomic) BOOL sendBtnEnabled;
@property (weak, nonatomic) id<AWEIMEmoticonKeyBoardDelegate> delegate;
@property (copy, nonatomic) NSDictionary *commentAdditionalInfos;
@property (copy, nonatomic) NSDictionary *logExtraDic;
@property (readonly, nonatomic) long long containerViewType;
@property (readonly, nonatomic) double defaultHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)horizontalGestureRecognizers;
- (id)logExtraDic;
- (void)setLogExtraDic:(id)a0;
- (BOOL)sendBtnEnabled;
- (id)commentAdditionalInfos;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withThemeInfos:(id)a1 containerViewType:(long long)a2 context:(id)a3;
- (void)updateKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onEmoticonViewAppear;
- (id)currentSelectedInfoModel;
- (id)currentSelectedPanelGestureRecognizers;
- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)scrollToUniqueId:(id)a0 animated:(BOOL)a1 enterMethod:(id)a2;
- (void)emoticonViewDidChangeHiddenTo:(BOOL)a0;
- (void)setSendBtnEnabled:(BOOL)a0;
- (void)trackCommentRecommendGiphyShownIfNeeded;
- (void)reloadRecentlyUsed;
- (void)scrollToRecentThemeView;
- (void)trackCommentEmoticonThemeViewShownIfNeeded;
- (void)reloadThemeInfos:(id)a0;
- (void)setCommentAdditionalInfos:(id)a0;
- (void)scrollToUniqueId:(id)a0 animated:(BOOL)a1;
- (void)forceLayoutBoxView;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)delegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;

@end
