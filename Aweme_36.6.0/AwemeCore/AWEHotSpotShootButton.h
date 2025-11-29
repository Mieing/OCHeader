@protocol AWEHotSpotShootButtonDelegate;

@interface AWEHotSpotShootButton : UIButton

@property (nonatomic) unsigned long long styleType;
@property (weak, nonatomic) id<AWEHotSpotShootButtonDelegate> delegate;

- (void)setupShootButtonStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconBounds;
- (id)spaceDistance;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)fontSize;
- (void)updateTitle:(id)a0;

@end
