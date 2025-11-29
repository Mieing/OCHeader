@class AWEInteractionExtraModel, UIImageView, NSString, UILabel;

@interface AWEInteractiveBubbleView : UIButton <AWEInteractiveBubbleViewProtocol>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *bodyImageView;
@property (retain, nonatomic) UIImageView *cornerImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) long long interactionStickerType;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) double caculateWidth;
@property (retain, nonatomic) AWEInteractionExtraModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buttonAction:(id)a0 forEvent:(id)a1;
- (double)typeHeight;
- (void)refreshModel:(id)a0 interactionType:(long long)a1;
- (void)refreshDirection:(unsigned long long)a0;
- (void)ajustCornerPositionPointX:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
