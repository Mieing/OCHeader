@class MMListCellConfig;
@protocol MMListContentUIDelegate;

@interface MMListCellView : UIView

@property (nonatomic) BOOL isHighlightable;
@property (retain, nonatomic) MMListCellConfig *config;
@property (weak, nonatomic) id<MMListContentUIDelegate> uiDelegate;

- (id)drawCell;
- (id)verticalStack;
- (id)horizontalStack;
- (void)drawSeparator;
- (void)configDataReport:(id)a0;
- (id)initWithConfig:(id)a0 uiDelegate:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
