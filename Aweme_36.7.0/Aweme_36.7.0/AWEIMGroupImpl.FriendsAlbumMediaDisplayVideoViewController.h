@interface AWEIMGroupImpl.FriendsAlbumMediaDisplayVideoViewController : AWEIMGroupImpl.FriendsAlbumMediaDisplayViewController <IESVideoPlayerDelegate> {
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ playerController;
    void /* unknown type, empty encoding */ posterImageView;
    void /* unknown type, empty encoding */ playIcon;
    void /* unknown type, empty encoding */ playerInteractionView;
    void /* unknown type, empty encoding */ tapGesture;
    void /* unknown type, empty encoding */ pausedByResignFirstResponder;
}

- (id)transitionEndView;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)cellDidEndDisplay:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
