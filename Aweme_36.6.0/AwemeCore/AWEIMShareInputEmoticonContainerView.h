@class UIColor, NSString;

@interface AWEIMShareInputEmoticonContainerView : AWEIMShareInputEmoticonToolBarView <AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) UIColor *tabBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1 theme:(id)a2 themeView:(id)a3 indexPath:(id)a4;
- (void)emoticonViewDidSelectTabSearch:(id)a0;
- (void)updatePanelContentViewZoomScale:(double)a0;
- (id)panelGestureRecognizers;
- (void)p_typeDidChangeToType:(unsigned long long)a0;
- (void)p_makeInputControlBarWithEmoticonBen:(id)a0;
- (id)p_panelContainerTopAttribute;
- (void)p_constraintInputControlBarAndEmoticonBtn;
- (id)p_makeEmoticonInfoArray;
- (void)p_configEmoticonUIConfig:(id)a0;
- (void)p_trackGeneralEmojiClickWithEmoticon:(id)a0 trackExtra:(id)a1 searchString:(id)a2;
- (void).cxx_destruct;
- (double)barHeight;

@end
