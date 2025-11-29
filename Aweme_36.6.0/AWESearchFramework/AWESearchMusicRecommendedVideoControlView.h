@class NSString, UIImageView, UILabel, UIView;

@interface AWESearchMusicRecommendedVideoControlView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *playBorderView;
@property (retain, nonatomic) UIView *useMusicBorderView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) UILabel *useMusicLabel;
@property (nonatomic, setter=setPlayingMusic:) BOOL isPlayingMusic;
@property (copy, nonatomic) NSString *playMusicTitle;
@property (copy, nonatomic) NSString *useMusicTitle;
@property (copy, nonatomic) id /* block */ playMusicBlock;
@property (copy, nonatomic) id /* block */ pauseMusicBlock;
@property (copy, nonatomic) id /* block */ useMusicBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;

- (void)setPlayingMusic:(BOOL)a0 animated:(BOOL)a1;
- (void)tap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
