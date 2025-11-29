@class NSString, AWENearbySkyLightCardModel, UIView, AWENearbySkylightFavoriteListView;
@protocol AWENearbySkyLightFavoriteElementViewActionDelegate;

@interface AWENearbySkylightFavoriteContainerView : UIView <AWENearbySkylightFavoriteListViewDelegate, AWENearbySkylightFavoriteListViewDataSource, AWENearbySkyLightElementViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWENearbySkylightFavoriteListView *leftListView;
@property (retain, nonatomic) AWENearbySkylightFavoriteListView *rightListView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (retain, nonatomic) AWENearbySkyLightCardModel *model;
@property (weak, nonatomic) id<AWENearbySkyLightFavoriteElementViewActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScrollEnable:(BOOL)a0;
- (void)__buildUI;
- (void)__layoutUI;
- (void)__configUI;
- (unsigned long long)elementViewType;
- (void)__trackDisplayPOI:(id)a0 isRecommend:(BOOL)a1;
- (void)__trackDisplayPOITitleWithRecommend:(BOOL)a0;
- (void)didSelectedInNearbySkylightFavoriteListView:(id)a0 atIndex:(unsigned long long)a1;
- (void)didSelectedEmptyViewInNearbySkylightFavoriteListView:(id)a0;
- (void)didSelectedTopViewInNearbySkylightFavoriteListView:(id)a0;
- (id)titleForNearbySkylightFavoriteListView:(id)a0;
- (id)rightTitleForNearbySkylightFavoriteListView:(id)a0;
- (long long)numberOfRowsInNearbySkylightFavoriteListView:(id)a0;
- (void)nearbySkylightFavoriteListView:(id)a0 willDisplayCollectionViewCell:(id)a1 index:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })nearbySkylightFavoriteListView:(id)a0 sizeAtIndex:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)trackShowAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;

@end
