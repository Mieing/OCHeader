@class IESECLiveGoodsListTab, UIImageView, NSString, UIView, UILabel;
@protocol IESECLiveGoodsListTabDelegate;

@interface IESECLiveGoodsListTabExpandView : UIView <IESECLiveGoodsListExpandTabDelegate>

@property (weak, nonatomic) id<IESECLiveGoodsListTabDelegate> delegate;
@property (retain, nonatomic) IESECLiveGoodsListTab *listTab;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *arrowContainerView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disappear;
- (void)listTab:(id)a0 updateTabHeight:(long long)a1;
- (void)setupTabModels:(id)a0 selectedIndex:(long long)a1 tabSkinConfig:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tabDelegate:(id)a1;
- (void)clickArrowAction;
- (void)maskClickAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
