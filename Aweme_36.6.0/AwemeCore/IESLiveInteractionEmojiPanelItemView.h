@class IESLiveInteractionEmojiPanelViewItem, UIImageView, NSString, UILabel, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveInteractionEmojiPanelItemView : UIView <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) IESLiveInteractionEmojiPanelViewItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapGestureActions:(id)a0;
- (void)updateMasConstraints;
- (void)p_updateTagWithText:(id)a0;
- (void)renderItem:(id)a0;
- (void)p_loadLynxViewWithItem:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
