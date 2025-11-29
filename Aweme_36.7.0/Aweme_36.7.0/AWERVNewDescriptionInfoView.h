@class UIImageView, AWEAwemeModel, UILabel, AWERelatedVideoDescriptionLabel;
@protocol AWERVNewDescriptionViewDelegate;

@interface AWERVNewDescriptionInfoView : UIView

@property (retain, nonatomic) AWERelatedVideoDescriptionLabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *expandImageView;
@property (retain, nonatomic) UILabel *publishTimeLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<AWERVNewDescriptionViewDelegate> delegate;

+ (struct CGSize { double x0; double x1; })desLabelSizeWithisExpand:(BOOL)a0 cardStyle:(long long)a1 model:(id)a2;
+ (struct CGSize { double x0; double x1; })desLabelHeightWithisExpand:(BOOL)a0 cardStyle:(long long)a1 model:(id)a2 rightOffset:(double)a3;

- (void)updateDescriptionLabel;
- (id /* block */)descriptionLabelTextActionWithAttributedString:(id)a0;
- (id)getDescriptionLabelAttributedStringWithModel:(id)a0;
- (void)expandDidClick;
- (id)currentExpandImage;
- (void)hideTimeLabelIfNeed:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
