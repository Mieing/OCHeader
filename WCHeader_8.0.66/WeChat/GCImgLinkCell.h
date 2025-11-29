@class UIImageView, UILabel, MMWebImageView, UIView;

@interface GCImgLinkCell : GCChatBaseCell

@property (retain, nonatomic) MMWebImageView *coverImgView;
@property (retain, nonatomic) UIImageView *playBtn;
@property (retain, nonatomic) UILabel *timeDuration;
@property (retain, nonatomic) UIView *videoLayerView;
@property (retain, nonatomic) UIView *imgAndVideoContainerView;

+ (void)onCalculatLayoutInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })getFitSizeForImgSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)timeTextForDutation:(long long)a0;
- (void)configureWithCellModel:(id)a0;
- (void).cxx_destruct;

@end
