@class UILabel, UIImageView, AWEIMHistoryMediaDisplayView;
@protocol AWEIMHistoryMediaDisplayViewDelegate;

@interface AWEIMGroupDetailHistoryMediaTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tailTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) unsigned long long strategy;
@property (weak, nonatomic) id<AWEIMHistoryMediaDisplayViewDelegate> delegate;
@property (retain, nonatomic) AWEIMHistoryMediaDisplayView *displayView;

+ (double)cellHeightFor:(unsigned long long)a0;

- (void)setupStrategy;
- (void)updateLayoutWithStrategy;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setupUI;

@end
