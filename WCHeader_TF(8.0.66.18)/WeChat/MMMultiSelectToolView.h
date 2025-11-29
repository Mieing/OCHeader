@class UIColor, NSMutableArray, UIButton;

@interface MMMultiSelectToolView : WCBottomBar

@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) UIColor *itemColor;
@property (retain, nonatomic) UIButton *openWithThirdPartyServiceButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setEnable:(BOOL)a0;
- (id)makeButtonWithImageName:(id)a0 target:(id)a1 action:(SEL)a2 accessibility:(id)a3;
- (void)addButtonWithImageName:(id)a0 target:(id)a1 action:(SEL)a2 accessibility:(id)a3;
- (void)addForwardButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)addFavoriteButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)addDeleteButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)addMoreButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)addDownloadButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)addOpenWithThirdPartyServiceButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)addShareButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)removeOpenWithThirdPartyServiceButton;
- (void).cxx_destruct;

@end
