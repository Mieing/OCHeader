@class NSString;

@interface AWEFollowButton : AWEUIListCellActionButton <AWEFollowButtonProtocol, AFDFollowButtonProtocol>

@property (nonatomic) double highlightedScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredButtonWidth;

- (void)updateFont:(id)a0;
- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1;
- (void)updateWithTitle:(id)a0 requiresAttention:(BOOL)a1;
- (void)updateColorModel:(id)a0;
- (void)updateWithTitle:(id)a0 icon:(id)a1 padding:(double)a2 requiresAttention:(BOOL)a3;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithTitle:(id)a0;

@end
