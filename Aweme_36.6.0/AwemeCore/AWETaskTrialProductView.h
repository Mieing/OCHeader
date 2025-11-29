@class UIImageView, UILabel, NSMutableArray;

@interface AWETaskTrialProductView : UIView

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) UILabel *productIndroductionLabel;
@property (retain, nonatomic) NSMutableArray *productAdvatageLabels;

- (void)updateWithChallenge:(id)a0;
- (void)setupSubView;
- (void)setupSubViewConstraints;
- (id)generateProductAdvantageLabel;
- (void).cxx_destruct;
- (id)init;

@end
