@class IESLiveKTVDecorateMidiModel, IESLiveImageView;

@interface IESLiveKTVDecorateMidiCell : IESLiveKTVDecorateCell

@property (retain, nonatomic) IESLiveImageView *thumnailView;
@property (retain, nonatomic) IESLiveImageView *topRightView;
@property (retain, nonatomic) IESLiveKTVDecorateMidiModel *model;

- (void)didTapSchemeButton;
- (void)tr_show;
- (void)tr_showDecorate;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)update:(id)a0;

@end
