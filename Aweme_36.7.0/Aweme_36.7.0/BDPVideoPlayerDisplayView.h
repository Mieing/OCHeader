@class BDPVideoWaterMarkView, BDPTiledImageView, UILabel, UIView;

@interface BDPVideoPlayerDisplayView : UIView

@property (retain, nonatomic) UILabel *signView;
@property (retain, nonatomic) BDPVideoWaterMarkView *waterMarkView;
@property (retain, nonatomic) BDPTiledImageView *darkWaterMarkView;
@property (nonatomic) unsigned long long signPosition;
@property (nonatomic) BOOL finishDarkWaterMark;
@property (retain, nonatomic) UIView *playerView;

- (void)updateMarkWithEnable:(BOOL)a0 text:(id)a1 color:(id)a2;
- (void)updateSignWithSignature:(id)a0;
- (void)updateDarkMarkWithUniqueID:(id)a0 enable:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setup;

@end
