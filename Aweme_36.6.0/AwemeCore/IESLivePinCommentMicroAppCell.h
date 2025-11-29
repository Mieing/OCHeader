@class UILabel, IESLiveImageView;

@interface IESLivePinCommentMicroAppCell : IESLivePinCommentBaseCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveImageView *coverImgView;

- (id)paramsWithNode:(id)a0;
- (void)configWithNode:(id)a0 containerWidth:(double)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
