@class UIButton, LSIMCommonModalViewController, UIImageView, UILabel, LSIMNoticeView, LSIMNoticeModel;

@interface LSIMNoticeModalView : UIView

@property (retain, nonatomic) LSIMNoticeModel *model;
@property (retain, nonatomic) LSIMNoticeView *noticeView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) LSIMCommonModalViewController *modalVC;

+ (long long)modalViewHeight;
+ (long long)annoumcementViewHeight;

- (void)confirmButtonTapped;
- (void)initView;
- (void)closeImageViewTapped;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)contentView;

@end
