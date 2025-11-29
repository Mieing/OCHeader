@class LOTAnimationView, WCFinderRichTextView, NSString;

@interface WCFinderFullDoubleLikeEduView : UIView

@property (retain, nonatomic) LOTAnimationView *doubleLikeView;
@property (retain, nonatomic) WCFinderRichTextView *eduTipsLabel;
@property (nonatomic) BOOL doubleLikeEduViewShowYet;
@property (retain, nonatomic) NSString *eduTips;
@property (copy, nonatomic) id /* block */ hitBlock;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)play;
- (void).cxx_destruct;

@end
