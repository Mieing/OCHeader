@class UIImageView, IESInteractiveGiftItem, UIView, UILabel, IESLiveInteractiveGiftItemCellSelectedView;
@protocol IESLiveCompoundSubscription;

@interface IESInteractiveGiftItemCell : UICollectionViewCell

@property (retain, nonatomic) IESInteractiveGiftItem *giftItem;
@property (retain, nonatomic) UIView *giftUnSelectedView;
@property (retain, nonatomic) UIView *giftItemContentView;
@property (retain, nonatomic) UIImageView *image;
@property (retain, nonatomic) UILabel *name;
@property (retain, nonatomic) UIView *priceContainer;
@property (retain, nonatomic) UILabel *price;
@property (retain, nonatomic) UILabel *priceUnit;
@property (retain, nonatomic) UIView *hintView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *pinLabel;
@property (retain, nonatomic) IESLiveInteractiveGiftItemCellSelectedView *giftSelectedView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> bindToken;
@property (nonatomic) BOOL needRock;
@property (copy, nonatomic) id /* block */ doubleClick;

- (void)loadSubViews;
- (void)unbindRACIfNeed;
- (void)selectSceneChanged:(unsigned long long)a0;
- (BOOL)enableShowUnSelectViewWithScene:(unsigned long long)a0;
- (void)showUnSelectedViewWithScene:(unsigned long long)a0;
- (BOOL)enableShowSelectViewWithScene:(unsigned long long)a0;
- (void)showSelectedViewWithScene:(unsigned long long)a0;
- (void)startRockAndColorAnimation;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
