@class AWEIMEmoticonPanelContainerView, NSString, UITextView, UIFont, UIView, UIColor, UIButton;
@protocol AWEIMShareInputEmoticonToolBarViewDelegate;

@interface AWEIMShareInputEmoticonToolBarView : UIView <AWEIMEmoticonKeyBoardDelegate, AWEIMShareInputEmoticonToolBarViewProtocol>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *inputControlBar;
@property (retain, nonatomic) UIButton *emoticonBtn;
@property (retain, nonatomic) UIView *panelContainerView;
@property (retain, nonatomic) UIView *lineSeparater;
@property (retain, nonatomic) AWEIMEmoticonPanelContainerView *emoticonPanel;
@property (nonatomic) double zoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (weak, nonatomic) id<AWEIMShareInputEmoticonToolBarViewDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;

- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1 theme:(id)a2 themeView:(id)a3 indexPath:(id)a4;
- (void)emoticonViewDidSelectDelete:(id)a0;
- (void)emoticonViewDidSendText:(id)a0;
- (void)trackEmoticonWithModel:(id)a0 type:(int)a1;
- (void)setTabBackgroundColor:(id)a0;
- (void)resetPanel;
- (void)updatePanelContentViewHeight:(double)a0;
- (void)refreshTextViewContent;
- (void)updatePanelContentViewZoomScale:(double)a0;
- (id)panelGestureRecognizers;
- (void)p_makeConstraints;
- (void)p_makeViews;
- (void)p_typeDidChangeToType:(unsigned long long)a0;
- (void)p_createEmoticonPanel;
- (void)p_didSelectDefaultEmoticonWithEmoticonTitle:(id)a0;
- (void)p_emoticonViewDidSelectDelete;
- (void)emoticonBtnClicked;
- (void)p_makeInputControlBarWithEmoticonBen:(id)a0;
- (id)p_panelContainerTopAttribute;
- (void)p_constraintInputControlBarAndEmoticonBtn;
- (id)p_makeEmoticonInfoArray;
- (void)p_configEmoticonUIConfig:(id)a0;
- (void).cxx_destruct;
- (double)barHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
