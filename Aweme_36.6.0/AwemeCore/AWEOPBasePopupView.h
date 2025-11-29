@class UITapGestureRecognizer, UIView;
@protocol AWEOPBasePopupViewDelegate;

@interface AWEOPBasePopupView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (weak, nonatomic) id<AWEOPBasePopupViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ didDismissBlock;

+ (id)popupView;
+ (long long)defaultContentHeight;
+ (id)defaultContentViewColor;
+ (id)defaultBackgroundColor;
+ (Class)backgroundViewClass;

- (void)updateTopCorner:(double)a0;
- (void)enableTapBackground:(BOOL)a0;
- (void)onTapBaseBackgroundView;
- (void)setupPopupSubviews;
- (id)initWithContentHeight:(long long)a0;
- (id)initWithContentHeight:(long long)a0 style:(unsigned long long)a1;
- (void)refreshConentHeight:(double)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showInView:(id)a0;

@end
