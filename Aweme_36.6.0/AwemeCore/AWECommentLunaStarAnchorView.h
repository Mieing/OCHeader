@class NSString, UIImageView, UILabel, UIView;

@interface AWECommentLunaStarAnchorView : UIView <AWECommentLunaAnchorProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UIView *topSplitLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bonusLabel;
@property (retain, nonatomic) UIView *bottomSplitDot;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)commentAnchorHeight;
- (double)commentLunaAnchorHeight;
- (void)p_didClick;
- (void)updateWithMusicType:(id)a0 title:(id)a1 bonusContent:(id)a2 guideContent:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
