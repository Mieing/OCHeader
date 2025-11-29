@class UIImageView, UILabel, IESLiveUnionLiveInfoStore;

@interface IESLiveUnionLivePendantView : UIView <HTSLivePluginLayoutView>

@property (weak, nonatomic) IESLiveUnionLiveInfoStore *store;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *guestAvatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowButton;
@property (copy, nonatomic) id /* block */ didClickPendantView;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)addTransparencyViewWith:(id)a0 layerSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateUnionLivePendantView;
- (void)trackClickPendantView;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)handleTapGesture:(id)a0;

@end
