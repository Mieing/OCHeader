@interface _TtC13FlowMarkdownXP33_BD34F4D4821887279ADF5AEB92ABD22D30FlowMarkdownTestViewController : UIViewController {
    void /* unknown type, empty encoding */ testMakrdownText;
    void /* unknown type, empty encoding */ textLength;
    void /* unknown type, empty encoding */ endPos;
    void /* unknown type, empty encoding */ markdownService;
    void /* unknown type, empty encoding */ markdownView;
    void /* unknown type, empty encoding */ renderScrollView;
    void /* unknown type, empty encoding */ progressLabel;
    void /* unknown type, empty encoding */ originTextView;
    void /* unknown type, empty encoding */ lastGlyphView;
    void /* unknown type, empty encoding */ sliderBar;
    void /* unknown type, empty encoding */ toolBar;
    void /* unknown type, empty encoding */ toolBarState_interrupted;
    void /* unknown type, empty encoding */ toolBarState_showLastGlyph;
    void /* unknown type, empty encoding */ toolBarState_autoStream;
    void /* unknown type, empty encoding */ streamingCanceller;
}

- (void)backwardClick:(id)a0;
- (void)forwardClick:(id)a0;
- (void)openMessageInterruptedState:(id)a0;
- (void)closeMessageInterruptedState:(id)a0;
- (void)showLastGlypha:(id)a0;
- (void)hideLastGlypha:(id)a0;
- (void)startStreamText:(id)a0;
- (void)endStreamText:(id)a0;
- (void)currentPosChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
