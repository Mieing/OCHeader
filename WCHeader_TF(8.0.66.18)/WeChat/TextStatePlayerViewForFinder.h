@class NSString;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStatePlayerViewForFinder : WCFinderFullNewMultiMediaView <WCFinderDataItemExt, WCFinderDataSourceCleanExt, WCFinderFeedContentMediaActionProtocol, TextStateBaseMediaView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (weak, nonatomic) id<TextStateBaseMediaViewDelegate> textStateDelegate;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isForceMuted) BOOL forceMuted;

+ (id)mediaWithContentVM:(id)a0 isSubScene:(BOOL)a1;

- (BOOL)isVideo;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (void)resetPlayMedia;
- (void)onPlayToEnd;
- (void)layoutSubviews;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderFeedDataSourceBeCleanWithTid:(id)a0;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void).cxx_destruct;

@end
