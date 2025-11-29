@class NSString;
@protocol GWHaowanAlbumBadNetViewDelegate;

@interface GWHaowanAlbumBadNetView : GWHostBaseView

@property (copy, nonatomic) NSString *badNetTip;
@property (copy, nonatomic) NSString *reloadDesc;
@property (weak, nonatomic) id<GWHaowanAlbumBadNetViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapReloadAction;
- (void).cxx_destruct;

@end
