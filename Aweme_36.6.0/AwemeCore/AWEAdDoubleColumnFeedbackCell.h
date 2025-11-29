@class AWEAdDoubleColumnFeedbackCellConfig, AWEAdDoubleColumnFeedbackViewModel, NSString, UIButton;

@interface AWEAdDoubleColumnFeedbackCell : UICollectionViewCell <AWEAdDoubleColumnFeedbackCellProtocol>

@property (copy, nonatomic) id /* block */ feedbackBlock;
@property (retain, nonatomic) AWEAdDoubleColumnFeedbackCellConfig *config;
@property (retain, nonatomic) UIButton *itemButton;
@property (retain, nonatomic) AWEAdDoubleColumnFeedbackViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setupDefaultConfig:(id)a0;
- (void)itemButtonPressed:(id)a0;
- (void)configWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)willDisplay;

@end
