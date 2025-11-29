@class UIImageView, UILabel, AWETemplateTagsModel;

@interface AWEFakedDailyWeeklyRecommendView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *fakeTextLabelImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) long long viewStyle;
@property (retain, nonatomic) AWETemplateTagsModel *tagsModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tagsModel:(id)a1 style:(long long)a2;
- (id)getDailyWeeklyTextWithWithTagsModel:(id)a0;
- (BOOL)isDailyWeeklyArrowStyleWithTagsModel:(id)a0;
- (void)setMagnifyFrame;
- (void)setInitFrame;
- (double)adaptiveInitIconImageSize;
- (id)getTextLabelWithTagsModel:(id)a0;
- (double)getTotalWidthWithTagsModel:(id)a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
