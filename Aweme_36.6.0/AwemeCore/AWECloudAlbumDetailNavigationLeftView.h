@class UILabel, UIImageView, UIButton;
@protocol AWECloudAlbumDetailNavigationLeftViewDelegate;

@interface AWECloudAlbumDetailNavigationLeftView : UIView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *hintImageView;
@property (readonly, nonatomic) UILabel *countLabel;
@property (readonly, nonatomic) UIButton *selectAllButton;
@property (weak, nonatomic) id<AWECloudAlbumDetailNavigationLeftViewDelegate> delegate;

- (void)updateWithState:(long long)a0 selectable:(BOOL)a1;
- (void)updateWithDoneCount:(long long)a0 totalCount:(long long)a1;
- (void)updateLeftViewStateWithSelectable:(BOOL)a0 hasMore:(BOOL)a1 isSelectAll:(BOOL)a2;
- (void)selectAllAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateWithTitle:(id)a0;

@end
