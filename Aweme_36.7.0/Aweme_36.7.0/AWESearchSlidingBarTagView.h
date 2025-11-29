@class UIImageView, UILabel, AWEGeneralSearchActivityTagModel;

@interface AWESearchSlidingBarTagView : UIView

@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) long long showCount;
@property (nonatomic) long long buttonIndex;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEGeneralSearchActivityTagModel *tagModel;

- (void)hideAt:(long long)a0;
- (BOOL)barTagCanShow:(id)a0;
- (struct CGSize { double x0; double x1; })barTagSizeWithModel:(id)a0;
- (void)showOn:(long long)a0 activityTagModel:(id)a1 showCount:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
