@class RingToneDetail, UIImageView, UIImage, UIView, SightIconView, MMUILabel;

@interface RingToneImageView : UIImageView {
    BOOL _showForCellOnly;
}

@property (retain, nonatomic) UIImageView *webCoverView;
@property (retain, nonatomic) RingToneDetail *ring;
@property (retain, nonatomic) MMUILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *qqMusicIconView;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) SightIconView *playImageView;
@property (retain, nonatomic) UIImageView *musicDancingView;
@property (nonatomic) BOOL isPlaying;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrameForCell:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)addDancingMusicView;
- (void)dancingMusicView:(BOOL)a0 type:(unsigned long long)a1;
- (void)updateCoverImageWith:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
