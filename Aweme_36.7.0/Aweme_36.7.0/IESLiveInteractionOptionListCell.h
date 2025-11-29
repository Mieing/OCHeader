@class IESLiveInteractionOptionListBubbleViewModel, IESLiveInteractionOptionItem, UIImageView, UILabel;
@protocol IESLiveCompoundSubscription;

@interface IESLiveInteractionOptionListCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *desc;
@property (retain, nonatomic) UIImageView *selectionIndicator;
@property (weak, nonatomic) IESLiveInteractionOptionItem *bindedItem;
@property (weak, nonatomic) IESLiveInteractionOptionListBubbleViewModel *viewModel;
@property (copy, nonatomic) id /* block */ didTap;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)handleTap;

@end
