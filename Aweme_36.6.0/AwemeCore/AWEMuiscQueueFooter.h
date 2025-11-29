@class YYLabel, NSMutableDictionary, UIImageView, UIColor, UIFont, UIButton;

@interface AWEMuiscQueueFooter : AWERefreshFooter

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) YYLabel *label;
@property (retain, nonatomic) UIImageView *loadingView;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (retain, nonatomic) NSMutableDictionary *stateAttributedTitles;
@property (nonatomic) BOOL blackBackground;
@property (nonatomic) BOOL hideNoMoreText;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIFont *textFont;

- (void)placeSubviews;
- (void)forceUpdateUI;
- (void)handleTapAction;
- (void)_startLoadingAnim;
- (void)p_updateLabel;
- (void)_stopLoadingAnim;
- (void)applicationWillEnterForeground:(id)a0;
- (void)_addObservers;
- (void).cxx_destruct;
- (void)_removeObservers;
- (void)setAttributedTitle:(id)a0 forState:(long long)a1;
- (void)setTitle:(id)a0 forState:(long long)a1;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)dealloc;

@end
