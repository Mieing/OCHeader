@class AWEBarSeparatorTextModel, UILabel, UIView;

@interface AWETemplateSeparatorView : UIView

@property (retain, nonatomic) AWEBarSeparatorTextModel *currentModel;
@property (retain, nonatomic) UIView *separatorDot;
@property (retain, nonatomic) UILabel *separatorLabel;

- (void)configSubviews;
- (void)layoutSubview;
- (void)addSubViews;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)updateWithData:(id)a0;
- (void)reset;

@end
