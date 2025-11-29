@class UIImage;

@interface AWEPOIHeaderContentBaseCell : UICollectionViewCell

@property (retain, nonatomic) UIImage *placeholderImage;

- (void)didEndDisplayingCell;
- (void)updateData:(id)a0 originHeight:(double)a1 completion:(id /* block */)a2;
- (void)updateLynxView:(id)a0 lynxUrl:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)updateUnfoldState:(BOOL)a0;
- (void).cxx_destruct;
- (void)willDisplayCell;

@end
