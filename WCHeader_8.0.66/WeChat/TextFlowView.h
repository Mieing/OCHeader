@class UIFont, MMTimer, NSString, UILabel;

@interface TextFlowView : UIView {
    BOOL _needFlow;
    MMTimer *_timer;
    long long _textAlignment;
    UIFont *_font;
    NSString *_text;
    UILabel *_label;
    long long _startIndex;
    double _XOffset;
    struct CGSize { double width; double height; } _textSize;
}

@property (nonatomic) unsigned int spaceLength;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })moveNewPoint:(struct CGPoint { double x0; double x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })computeTextSize:(id)a0 Font:(id)a1;
- (void)timerAction;
- (void)startRun;
- (void)cancelRun;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 Font:(id)a1 Text:(id)a2;
- (void)setFont:(id)a0;
- (void)setText:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void)setTextColor:(id)a0;
- (void).cxx_destruct;

@end
