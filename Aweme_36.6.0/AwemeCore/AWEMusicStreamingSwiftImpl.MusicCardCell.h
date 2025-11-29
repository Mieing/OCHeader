@class NSString;

@interface AWEMusicStreamingSwiftImpl.MusicCardCell : UICollectionViewCell <AWEMusicCardCell> {
    void /* function */ referString;
    void /* unknown type, empty encoding */ cardViewController;
    void /* unknown type, empty encoding */ parentVC;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ isPureMode;
}

@property (nonatomic, copy) NSString *referString;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)player:(id)a0 playbackFailedForURL:(id)a1 error:(id)a2;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (id)pinchTargetView;
- (void)configWithModel:(id)a0 isPureMode:(BOOL)a1 parentVC:(id)a2;
- (void)cardWillDisplay;
- (void)cardDidEndDisplay;
- (BOOL)shouldResponseToTap:(struct CGPoint { double x0; double x1; })a0 from:(id)a1;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3 playbackRate:(double)a4;
- (void)updateCardVC:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)stop;
- (void)reset;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
