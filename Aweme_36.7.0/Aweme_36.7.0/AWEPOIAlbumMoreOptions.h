@class NSArray, AWEPOIDetailMoreOptionView, UIView;
@protocol AWEPOIAlbumMoreOptionsViewDelegate;

@interface AWEPOIAlbumMoreOptions : UIView <AWEPOIDetailMoreOptionViewDelegate>

@property (retain, nonatomic) AWEPOIDetailMoreOptionView *moreOptionView;
@property (retain, nonatomic) UIView *tapToCloseView;
@property (retain, nonatomic) NSArray *moreOptionItems;
@property (weak, nonatomic) id<AWEPOIAlbumMoreOptionsViewDelegate> delegate;

- (void)p_closePage;
- (void)p_setupViews;
- (void)tapToClose;
- (void)tapItem:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 moreOptionItems:(id)a1;
- (void).cxx_destruct;
- (void)setupViews;

@end
