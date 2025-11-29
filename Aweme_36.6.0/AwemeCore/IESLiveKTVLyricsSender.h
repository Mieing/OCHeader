@class RACCompoundDisposable, NSString, IESLiveKRCSentenceTimeSource, IESLiveLyricViewConfig;
@protocol IESLiveKTVLyricsHandlerDelegate;

@interface IESLiveKTVLyricsSender : NSObject <IESLiveKTVLyricsHandler>

@property (retain, nonatomic) IESLiveKRCSentenceTimeSource *krcSentenceTimeSource;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (weak, nonatomic) id<IESLiveKTVLyricsHandlerDelegate> delegate;
@property (retain, nonatomic) IESLiveLyricViewConfig *lyricViewConfig;
@property (nonatomic) double currentPlayingTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
