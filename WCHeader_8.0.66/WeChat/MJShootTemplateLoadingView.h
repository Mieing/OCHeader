@class NSString, MJCircleProgressView, UILabel, UIView;

@interface MJShootTemplateLoadingView : UIView

@property (retain, nonatomic) UIView *progressBGView;
@property (retain, nonatomic) MJCircleProgressView *progressView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (readonly, copy, nonatomic) NSString *bindTemplateID;

+ (id)titleLabelFont;

- (id)initWithTemplateID:(id)a0;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)startLoading;
- (void)updateProgress:(double)a0;
- (void).cxx_destruct;

@end
