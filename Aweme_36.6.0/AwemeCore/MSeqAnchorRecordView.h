@class UIImageView, UILabel;

@interface MSeqAnchorRecordView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) long long currentNum;
@property (copy, nonatomic) id /* block */ completeHandle;

- (void)refreshLabel;
- (void)animateBegin;
- (id)initWithTime:(int)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)start;
- (void)layoutSubviews;
- (void)setupUI;

@end
