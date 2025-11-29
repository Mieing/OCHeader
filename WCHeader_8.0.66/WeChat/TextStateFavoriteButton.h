@class NSNumber;

@interface TextStateFavoriteButton : TextStateBlurButton

@property (retain, nonatomic) NSNumber *typeNumber;
@property (nonatomic) unsigned int funcType;
@property (nonatomic, getter=hasNotify) BOOL notify;
@property (readonly, nonatomic) unsigned int type;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFuncType:(unsigned int)a0;
- (void)setSelected:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)changeForOther;
- (void)changeForSelfWithInteractionCount:(unsigned int)a0 notifyCount:(unsigned int)a1;
- (void)favoriteImpact;
- (void).cxx_destruct;

@end
