@class NSString, MMEmoticonView, AppEmoticonMessageViewModel, SightIconView, UIImageView, EmoticonCustomAddLogicController;

@interface AppEmoticonMessageCellView : CommonMessageCellView <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate> {
    MMEmoticonView *m_emoticonView;
    SightIconView *m_sightIconView;
    UIImageView *m_bottomInfoBgView;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
}

@property (readonly, nonatomic) AppEmoticonMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)layoutContentView;
- (void)updateProgress;
- (void)onAppear;
- (void)initEmoticonView;
- (void)showBottomInfoBgView;
- (void)showSightIconWithIconType:(int)a0;
- (id)operationMenuItems;
- (void)onSaveEmoticon:(id)a0;
- (void)onShowRelatedEmoticon:(id)a0;
- (void)onTakeCameraFollow:(id)a0;
- (void)onForward:(id)a0;
- (void)onTouchUpInside;
- (void)onClick;
- (void)startDownloadImage;
- (void)onLongTouch;
- (id)getViewController;
- (void)onClickAsRefer;
- (void).cxx_destruct;

@end
