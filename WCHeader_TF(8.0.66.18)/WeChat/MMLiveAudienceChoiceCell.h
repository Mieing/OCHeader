@class MMUIView, MMUILabel;

@interface MMLiveAudienceChoiceCell : UICollectionViewCell <MMLiveVoteViewModelObserver>

@property (nonatomic) float voteProgress;
@property (nonatomic) BOOL animating;
@property (retain, nonatomic) MMUIView *background;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *selectCountLabel;
@property (retain, nonatomic) MMUIView *voteProgressView;

+ (id)ReuseIdentifier;
+ (id)createLayoutWithSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)performAnimateToProgress:(float)a0;
- (void)updateWithChoice:(id)a0 progress:(float)a1 showProgress:(BOOL)a2;
- (void)updateWithChoice:(id)a0 showProgress:(BOOL)a1;
- (void)layoutSubviews;
- (void)addShadowToLabel:(id)a0;
- (void)removeLabelShadow:(id)a0;
- (void).cxx_destruct;

@end
