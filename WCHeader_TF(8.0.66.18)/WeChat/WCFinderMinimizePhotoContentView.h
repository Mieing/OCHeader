@class WCFinderBGMPlayer, NSString, UIView;

@interface WCFinderMinimizePhotoContentView : WCFinderMinimizeDisplayContentBaseView <WCFinderBGMPlayerDelegate>

@property (nonatomic) long long currentIdx;
@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) BOOL needResetSeek;
@property (retain, nonatomic) WCFinderBGMPlayer *bgPlayer;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (retain, nonatomic) UIView *contentImageView;
@property (copy, nonatomic) id /* block */ playerGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMoveToWindow;
- (void)dealloc;
- (void)cleanUp;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pausePlay;
- (void)resumePlay;
- (id)animatingSnapView;
- (BOOL)beTakeOverAudioModel;
- (BOOL)needFullCover;
- (void)onBGMPlayerPlayToEnd:(id)a0;
- (void)onBGMPlayerDidPlay:(id)a0;
- (void)onBGMPlayerDidPause:(id)a0;
- (void).cxx_destruct;

@end
