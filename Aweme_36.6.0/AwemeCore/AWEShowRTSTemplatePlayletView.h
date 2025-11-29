@class NSString, NSMutableDictionary;

@interface AWEShowRTSTemplatePlayletView : AWETemplatePlayletView {
    void /* function */ activeText;
    void /* unknown type, empty encoding */ barContext;
    void /* unknown type, empty encoding */ currentModel;
    void /* unknown type, empty encoding */ tagModel;
    void /* unknown type, empty encoding */ relaxView;
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ props;
    void /* unknown type, empty encoding */ buttonHighlightOpt;
    void /* unknown type, empty encoding */ buttonText;
    void /* unknown type, empty encoding */ createViewCost;
    void /* unknown type, empty encoding */ renderCost;
}

@property (nonatomic, copy) NSString *activeText;
@property (nonatomic, retain) NSMutableDictionary *traceParams;

- (void)updateSubContent:(id)a0;
- (void)resetNextButton;
- (void)highlightNextButton;
- (void)tryLayout;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (id)initWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setNextButtonText:(id)a0;

@end
