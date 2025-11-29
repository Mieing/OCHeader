@class UIButton, NSString, IESLivePlaybackDanmakuPopupMenuItem;

@interface IESLivePlaybackDanmakuPopupMenuItemView : UIView <IESLivePlaybackDanmakuPopupMenuItemViewProtocol>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) IESLivePlaybackDanmakuPopupMenuItem *item;
@property (copy, nonatomic) id /* block */ actionPerformed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureButton;
- (void).cxx_destruct;
- (void)performAction;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithItem:(id)a0;
- (void)setupViews;

@end
