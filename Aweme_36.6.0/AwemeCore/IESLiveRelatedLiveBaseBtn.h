@class UIImageView, IESLiveImageView, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLiveRelatedLiveBaseBtn : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveImageView *iconImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *liveWebp;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long buttonType;
@property (nonatomic) double titleMaxWidth;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)addTransparencyViewWith:(id)a0 layerSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateWithEntryItem:(id)a0;
- (id)initWithEntryItem:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)viewType;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupSubviews;
- (void)updateTitle:(id)a0;

@end
