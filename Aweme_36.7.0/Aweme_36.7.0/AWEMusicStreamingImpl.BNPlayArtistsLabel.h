@class UIColor, UIFont, UIView;

@interface AWEMusicStreamingImpl.BNPlayArtistsLabel : YYLabel <AWEMusicStreamingImpl.BNPlayArtistsLabelable> {
    void /* unknown type, empty encoding */ currentArtists;
}

@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, readonly) UIView *selfView;

- (void)updateWithArtists:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
