@class UIImageView, BDWebImageRequestConfig, NSString;
@protocol AWEIMEmoticonThemeModelProtocol, AWEIMEmoticonModelProtocol;

@interface AWEIMSharePanelEmoticonSelectionView : UIView <AWEIMShareInputEmoticonSelectionViewProtocol>

@property (retain, nonatomic) UIImageView *emoticonView;
@property (retain, nonatomic) id<AWEIMEmoticonModelProtocol> emoticonModel;
@property (retain, nonatomic) id<AWEIMEmoticonThemeModelProtocol> themeModel;
@property (retain, nonatomic) BDWebImageRequestConfig *config;
@property (copy, nonatomic) id /* block */ didClickCloseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentEmoticonSelection;
- (void)configAndShowWithEmoticonModel:(id)a0 theme:(id)a1 selectedView:(id)a2;
- (void)p_didTapClose;
- (void)clearAndHide;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
