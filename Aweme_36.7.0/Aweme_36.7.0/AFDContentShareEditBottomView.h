@class UIButton, NSString, UIView;
@protocol AWEIMEmoticonContainerViewProtocol, ACCContentShareEditBottomViewDelegate;

@interface AFDContentShareEditBottomView : UIView <AWEIMEmoticonKeyBoardDelegate, ACCContentShareEditBottomViewProtocol>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *inputControlBar;
@property (retain, nonatomic) UIButton *emoticonBtn;
@property (retain, nonatomic) UIButton *mentionBtn;
@property (retain, nonatomic) UIView *panelContainerView;
@property (retain, nonatomic) UIView *lineSeparater;
@property (retain, nonatomic) UIView<AWEIMEmoticonContainerViewProtocol> *emoticonPanel;
@property (nonatomic) BOOL isMentionEnabled;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<ACCContentShareEditBottomViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1 theme:(id)a2 themeView:(id)a3 indexPath:(id)a4;
- (void)emoticonViewDidSelectDelete:(id)a0;
- (void)emoticonViewDidSendText:(id)a0;
- (void)trackEmoticonWithModel:(id)a0 type:(int)a1;
- (void)awe_themeDidChange:(long long)a0;
- (void)closePanel;
- (void)updatePanelContentViewHeight:(double)a0;
- (void)mentionBtnClicked;
- (void)emoticonBtnClicked;
- (double)defaultEmoticonContentViewHeight;
- (void)updatePanelDeleteBtnState:(BOOL)a0;
- (id)initWithIsMentionEnabled:(BOOL)a0 enterFrom:(id)a1;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setup;

@end
