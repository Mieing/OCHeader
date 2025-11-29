@class NSArray, NSNumber, WCDragBarButtonView;

@interface WCDragDeleteBarView : MMUIView

@property (retain, nonatomic) NSArray *buttonArray;
@property (retain, nonatomic) WCDragBarButtonView *starBtn;
@property (retain, nonatomic) WCDragBarButtonView *deleteBtn;
@property (retain, nonatomic) NSNumber *lastButtonOption;
@property (nonatomic) long long option;
@property (nonatomic) BOOL isMoveIn;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)updateDeleteBtnTitle:(id)a0;
- (void)layoutSubviews;
- (long long)moveIn:(struct CGPoint { double x0; double x1; })a0;
- (void)moveOut;
- (void).cxx_destruct;

@end
