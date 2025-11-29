@class IESLiveKTVDecorateTagModel, IESLiveImageView, IESLiveUniformTag;

@interface IESLiveKTVDecorateTagCell : IESLiveKTVDecorateCell

@property (retain, nonatomic) IESLiveImageView *avatar;
@property (retain, nonatomic) IESLiveUniformTag *tagView;
@property (retain, nonatomic) IESLiveKTVDecorateTagModel *model;

- (void)didTapSchemeButton;
- (void)tr_show;
- (void)tr_showTag;
- (void).cxx_destruct;
- (void)update:(id)a0;

@end
