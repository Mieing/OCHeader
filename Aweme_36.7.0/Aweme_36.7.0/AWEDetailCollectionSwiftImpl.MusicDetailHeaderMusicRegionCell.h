@interface AWEDetailCollectionSwiftImpl.MusicDetailHeaderMusicRegionCell : UICollectionViewCell <AWEMusicServiceDelegate, AWEMusicDetailMusicCardViewDelegate> {
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ cardView;
    void /* unknown type, empty encoding */ collectActionBlock;
    void /* unknown type, empty encoding */ playStatusChangeHandler;
}

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)headerMusicRegionCollectMusicWithSender:(id)a0 musicModel:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
