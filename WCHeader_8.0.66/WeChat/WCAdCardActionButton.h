@class WCAdCardBtnInfo, UIView;

@interface WCAdCardActionButton : MMUIButton

@property (retain, nonatomic) WCAdCardBtnInfo *buttonInfo;
@property (nonatomic) long long animationState;
@property (retain, nonatomic) UIView *highlightedCoverView;
@property (nonatomic) long long enabledStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 buttonInfo:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initialContentsWithInfo:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)fetchNormalBgColorWithInfo:(id)a0;
- (id)fetchDisabledBgColor;
- (id)fetchNormalTitleColorWithInfo:(id)a0;
- (id)fetchDisabledTitleColor;
- (void)startToAnimate;
- (void)stopAnimating;
- (void)asyncStartToAnimate;
- (void).cxx_destruct;

@end
