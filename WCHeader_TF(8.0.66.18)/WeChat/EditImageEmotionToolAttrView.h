@class EmoticonBoardView, NSString, UIToolbar;
@protocol EditImageEmotionToolAttrDelegate;

@interface EditImageEmotionToolAttrView : MMUIView <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonSearchViewControllerDelegate>

@property (nonatomic) BOOL isEmoticonSearchEnabled;
@property (nonatomic) unsigned long long emoticonBoardViewStyle;
@property (weak, nonatomic) id<EditImageEmotionToolAttrDelegate> _delegate;
@property (retain, nonatomic) UIToolbar *_toolBar;
@property (retain, nonatomic) EmoticonBoardView *_emoticonBoardView;
@property (nonatomic) BOOL animatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 emoticonBoardViewStyle:(unsigned long long)a1;
- (void)initToolBar;
- (void)initEmoticonView;
- (void)updateEmoticonView;
- (void)notifyEmoticonBoradViewWillDisplay;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateForEmoticonSearch:(BOOL)a0;
- (void)onDoneBtnClicked;
- (void)_onSelectedEmoticonWithWrap:(id)a0;
- (void)didSelectorEmoticon:(id)a0;
- (void)didSelectorSelfDefinedEmotcion:(id)a0;
- (void)onEmoticonSearchIconClicked;
- (void)onSendButtonClicked;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)a0;
- (void)onSearchEmoticonViewControllerDidClose;
- (void).cxx_destruct;

@end
