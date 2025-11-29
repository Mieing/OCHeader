@class NSString, AWEAwemeModel, UICollectionViewCell, NSIndexPath;
@protocol AWECollectionAwemeCellPlayerContainer, IESVideoPlayerProtocol;

@interface AWECollectionAwemeCellPlayerManager : NSObject <IESVideoPlayerDelegate, AWECollectionAwemeCellPlayerManagerProtocol>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> currentPlayer;
@property (weak, nonatomic) UICollectionViewCell<AWECollectionAwemeCellPlayerContainer> *playerCell;
@property (retain, nonatomic) NSIndexPath *previousIndexPath;
@property (nonatomic) BOOL operating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (copy, nonatomic) id /* block */ awemeCellPlayerDidChange;
@property (copy, nonatomic) id /* block */ awemeCellPlayerDidStop;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)stopAndHidePreviousPlayer;
- (void)animateThenDestroyPlayer:(id)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })limitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 windowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)findPlayerContainerWithContext:(id)a0;
- (id)createPlayerForAweme:(id)a0;
- (id)indexPathInCandidates:(id)a0 strategy:(long long)a1;
- (void)updatePlayerIfNeededWithContext:(id)a0;
- (void).cxx_destruct;
- (void)resignActive;
- (id)init;
- (void)dealloc;

@end
