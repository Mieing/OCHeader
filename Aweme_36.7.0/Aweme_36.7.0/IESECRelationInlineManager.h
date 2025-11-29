@class NSString, UICollectionView, IESECRelationInlinePlayerController, FBKVOController, NSIndexPath, UIView;

@interface IESECRelationInlineManager : NSObject <IESECRelationInlinePlayerControllerDelegate> {
    UIView *_container;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECRelationInlinePlayerController *player;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (retain, nonatomic) FBKVOController *KVOController;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL mutePlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumePlay;
- (void)UIApplicationWillResignActiveNotification;
- (void)UIApplicationDidBecomeActiveNotification;
- (id)fetchPlayCard;
- (void)playWithCard:(id)a0;
- (id)fetchResumePlayCard;
- (BOOL)isCanPlay:(id)a0 visible:(double)a1;
- (void)tryToStop:(id)a0;
- (void)tryToPlay;
- (void)updatePlayableDurationAndCurrentTimeWithPlayableTime:(double)a0 currentTime:(double)a1;
- (void)tryToPlayContinueWithCurrentTime:(double)a0 duration:(double)a1;
- (void)updateCurrentPlayTime:(double)a0 playableTime:(double)a1 duration:(double)a2;
- (void)findCardAndStopWithVisibleRatio:(double)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeAnimation;
- (id)getVisibleIndexPaths;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithCollectionView:(id)a0;
- (void)stop;
- (void)dealloc;

@end
