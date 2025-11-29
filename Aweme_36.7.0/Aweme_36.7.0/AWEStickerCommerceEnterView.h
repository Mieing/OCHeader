@class UIImageView, UILabel, IESEffectModel, UIButton;

@interface AWEStickerCommerceEnterView : UIView

@property (retain, nonatomic) UIImageView *stickerImage;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) UILabel *enterLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) IESEffectModel *effectModel;

- (void)updateStickerDataWithEffectModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
