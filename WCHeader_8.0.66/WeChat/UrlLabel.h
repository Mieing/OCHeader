@class NSString, UIColor, NSMutableDictionary;
@protocol ILinkEventExt;

@interface UrlLabel : MMCPLabel {
    BOOL _bTouchEnds;
}

@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSString *backupUrlString;
@property (weak, nonatomic) id<ILinkEventExt> linkDelegate;
@property (nonatomic) BOOL ignoreHighlight;
@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;

- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)setHighlighted:(BOOL)a0;
- (void)throwUrlMessage;
- (void)willMoveToSuperview:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)cancelDelayedTouches;
- (void).cxx_destruct;

@end
