@interface AccompanyTrack : NSObject {
    struct AccompanyTrack { void /* function */ **_vptr$AccompanyTrack; struct unique_ptr<audiobase::remix::AccompanyTrackImpl, std::default_delete<audiobase::remix::AccompanyTrackImpl>> { struct __compressed_pair<audiobase::remix::AccompanyTrackImpl *, std::default_delete<audiobase::remix::AccompanyTrackImpl>> { struct AccompanyTrackImpl *__value_; } __ptr_; } _impl; } _accompanyTrack;
}

- (BOOL)initWithTrackInfos:(id)a0;
- (BOOL)processWithTrackIndex:(unsigned long long)a0 TrackInfo:(id)a1 Buffer:(short *)a2 BufLen:(unsigned long long)a3 Gain:(float)a4;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
