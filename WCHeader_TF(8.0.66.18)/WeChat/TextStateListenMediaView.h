@class NSString;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStateListenMediaView : TingLiteMediaView <TextStateResidentMediaView>

@property (nonatomic) double startPlayTime;
@property (copy, nonatomic) NSString *textStateId;
@property (nonatomic) BOOL inBrandAudioMode;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (weak, nonatomic) id<TextStateBaseMediaViewDelegate> textStateDelegate;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isForceMuted) BOOL forceMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTingItem:(id)a0;
- (id)initWithMusicInfo:(id)a0;
- (id)initWithListenId:(id)a0;
- (void)textstateComminit;
- (double)fullScreenAspectRatio;
- (void)pausePlayMedia;
- (void)startPlayMedia;
- (void)stopPlayMedia;
- (void)clearPlayTime;
- (BOOL)residentMediaIfNeeded;
- (BOOL)shouldResidentMedia;
- (id)stateListenId;
- (void)startPlayBrandAudio;
- (void)endPlayBrandAudio;
- (void).cxx_destruct;

@end
