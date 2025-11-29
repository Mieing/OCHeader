@class HTSLiveVSLinkNode, UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveWebPPlayer;

@interface IESLiveLinkedRoomListViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *contentBackView;
@property (retain, nonatomic) UIView *headerCirleView;
@property (retain, nonatomic) UIImageView *headerIcon;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *liveIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *watchButton;
@property (retain, nonatomic) HTSLiveVSLinkNode *linkNode;
@property (copy, nonatomic) id /* block */ watchClickBlock;
@property (nonatomic) long long cellType;

+ (id)cellIdentifier;

- (void)updateLinkNode:(id)a0 celltype:(long long)a1;
- (void)watchButtonClick:(id /* block */)a0;
- (id)addTransparencyViewWith:(id)a0 layerSize:(struct CGSize { double x0; double x1; })a1;
- (void)_addMasonry;
- (void)goWatch:(id)a0;
- (void)backContentClick;
- (void)iconClick;
- (void)watchButtonSelect;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)refreshContent;
- (void)createUI;

@end
