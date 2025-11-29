@class NSString;
@protocol WCTimeLineEditImageOperationDelegate;

@interface WCTimeLineEditImageScrollView : WCEditImageScrollView <WCTimeLineEditImageOperationDelegate>

@property (weak, nonatomic) id<WCTimeLineEditImageOperationDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getEditImageView;
- (BOOL)recoverLyricsWidget;
- (void)updateMusicLyrics:(id)a0 totalTime:(double)a1;
- (void)updateMusicLyricsCropTime:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)seekMusicLyricsToRelativeTimeSec:(double)a0;
- (void)setMusicLyricIsOn:(BOOL)a0;
- (void)setMusicLyricWidgetAlpha:(double)a0;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;

@end
