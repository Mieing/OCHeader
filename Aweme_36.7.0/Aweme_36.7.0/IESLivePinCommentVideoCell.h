@class IESLiveImageView, IESLivePinCommentCheckTipView;

@interface IESLivePinCommentVideoCell : IESLivePinCommentBaseCell

@property (retain, nonatomic) IESLiveImageView *coverImgView;
@property (retain, nonatomic) IESLiveImageView *playIcon;
@property (retain, nonatomic) IESLivePinCommentCheckTipView *checkTipView;

- (void)configWithNode:(id)a0 containerWidth:(double)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
