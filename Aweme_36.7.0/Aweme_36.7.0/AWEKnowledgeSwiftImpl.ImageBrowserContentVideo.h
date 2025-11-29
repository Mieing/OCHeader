@interface AWEKnowledgeSwiftImpl.ImageBrowserContentVideo : UIView <AWEDPlayerDelegate> {
    void /* unknown type, empty encoding */ imageModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_player;
    void /* unknown type, empty encoding */ contentShow;
}

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)iesPlayer:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
