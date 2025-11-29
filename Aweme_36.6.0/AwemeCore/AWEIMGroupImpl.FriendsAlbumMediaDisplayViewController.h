@class AWEAwemeModel;

@interface AWEIMGroupImpl.FriendsAlbumMediaDisplayViewController : UIViewController <AWEIMAwemeMediaDisplayControllerProtocol> {
    void /* function */ pureModeBlock;
    void /* function */ innerScrollViewDidSingleTap;
    void /* function */ innerScrollViewEndDecelerating;
    void /* unknown type, empty encoding */ illegalView;
    void /* unknown type, empty encoding */ viewIsDisappear;
    void /* unknown type, empty encoding */ isPureMode;
    void /* unknown type, empty encoding */ headerGradientView;
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ _encryptService;
}

@property (nonatomic, copy) id /* block */ pureModeBlock;
@property (nonatomic, copy) id /* block */ innerScrollViewDidSingleTap;
@property (nonatomic, copy) id /* block */ innerScrollViewEndDecelerating;
@property (nonatomic, retain) AWEAwemeModel *awemeModel;

- (void)cellDidEndDisplay:(id)a0;
- (id)transitionEndView;
- (BOOL)transitionEndViewAvailable;
- (void)play;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
