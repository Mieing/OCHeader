@class UILabel, AWEButton;

@interface AWEConcernCellLastView : UIView

@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) AWEButton *backToHotFeedButton;
@property (retain, nonatomic) UILabel *scrollTipsLabel;
@property (copy, nonatomic) id /* block */ singleClickBlock;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)layoutSubviews;
- (void)onLastViewSingleClick;
- (void)onBackToHotFeedButtonClick;
- (void)adjustTitleAndImage:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)bindWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
