@class IESGCPEvaluationStarsView, UIVisualEffectView, UIImageView, UIView, UILabel, NSDictionary;
@protocol AWEGCPEvaluationPublishStarViewDelegate;

@interface AWEGCPEvaluationPublishStarView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView *firstBackgroundView;
@property (retain, nonatomic) IESGCPEvaluationStarsView *fiveStarView;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIImageView *gameIconImageView;
@property (retain, nonatomic) UILabel *gameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) id<AWEGCPEvaluationPublishStarViewDelegate> delegate;

- (void)viewDidDisposed;
- (void)viewDidDisplay;
- (void)updateWithAwemeModel:(id)a0 extraParams:(id)a1;
- (void)closeStarCardView;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
