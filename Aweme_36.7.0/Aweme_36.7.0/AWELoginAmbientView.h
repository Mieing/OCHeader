@class UIImageView, NSDictionary, AWELoginAmbientViewModel;
@protocol AWELoginAmbientViewDelegate;

@interface AWELoginAmbientView : UIView

@property (nonatomic) BOOL count;
@property (retain, nonatomic) UIImageView *headerView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (weak, nonatomic) id<AWELoginAmbientViewDelegate> delegate;
@property (retain, nonatomic) AWELoginAmbientViewModel *model;
@property (copy, nonatomic) NSDictionary *monitorInfo;
@property (nonatomic) BOOL showHeaderView;
@property (readonly, nonatomic) BOOL headerViewHasImage;

- (id)p_imagePathWithgeckoChannel:(id)a0 imageName:(id)a1;
- (void)p_monitorLoadImage:(BOOL)a0 duration:(double)a1 imageFrom:(long long)a2 imagePath:(id)a3 imageURL:(id)a4 imageType:(id)a5 error:(id)a6;
- (void)p_updateImageView:(id)a0 imagePath:(id)a1 imageURL:(id)a2 completion:(id /* block */)a3;
- (BOOL)backgroundViewHasImage;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
