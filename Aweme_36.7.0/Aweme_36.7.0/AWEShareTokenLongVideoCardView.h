@class AWEShareTokenHandlerResponseModel, UIView, AWEGradientView, UILabel;

@interface AWEShareTokenLongVideoCardView : AWEShareTokenNoteBaseCardView

@property (retain, nonatomic) AWEShareTokenHandlerResponseModel *model;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView *firstLineContainerView;
@property (retain, nonatomic) UILabel *filmNameLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UIView *secondLineContainerView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *categoryLabel;

- (void)configUI;
- (id)buildDetailLabelText:(id)a0;
- (id)initWithConfigModel:(id)a0 model:(id)a1;
- (void)updateUIWithLongVideoModel:(id)a0;
- (void)transferToLongVideoPage;
- (void).cxx_destruct;

@end
