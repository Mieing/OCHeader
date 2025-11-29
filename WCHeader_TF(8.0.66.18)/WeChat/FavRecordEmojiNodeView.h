@class NSString, MMEmoticonView, CEmoticonWrap, EmoticonCustomAddLogicController, UIImageView;

@interface FavRecordEmojiNodeView : FavRecordBaseNodeView <MMUIViewControllerDelegate, IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (nonatomic) BOOL didCallReload;
@property (readonly, nonatomic) MMEmoticonView *emojiView;
@property (readonly, nonatomic) UIImageView *gameEmojiView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addContentSubView;
- (void)layoutSubviews;
- (void)onTouchUpInside;
- (void)handleLongGesture:(id)a0;
- (void)onSaveEmoticon:(id)a0;
- (void)onForward:(id)a0;
- (void)onShowDetailPage:(id)a0;
- (void)onTakeCameraFollow:(id)a0;
- (void)showDetailPageWithNeedScrollToBottom:(BOOL)a0 extrance:(int)a1;
- (void)doForward;
- (BOOL)isGameEmoticon;
- (id)getGameImageByContent:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectForMenuControllerForRecordDetail;
- (id)getViewController;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)gameEmoticonAccessibilityLabel;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void).cxx_destruct;

@end
