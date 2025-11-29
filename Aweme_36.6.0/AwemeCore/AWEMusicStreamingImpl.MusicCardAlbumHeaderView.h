@interface AWEMusicStreamingImpl.MusicCardAlbumHeaderView : UIView {
    void /* function */ onClickArtists;
    void /* unknown type, empty encoding */ coverImageView;
    void /* unknown type, empty encoding */ coverShadowView;
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ artistsLabel;
    void /* unknown type, empty encoding */ artistsArrow;
    void /* unknown type, empty encoding */ dateLabel;
    void /* unknown type, empty encoding */ needAdaptBigFontMode;
}

@property (nonatomic, copy) id /* block */ onClickArtists;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needAdaptBigFontMode:(BOOL)a1;
- (void)updateWithAlbum:(id)a0;
- (void)onClickArtistsArea;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
