@class NSString;
@protocol TLProfileBaseMediaViewDelegate;

@interface TLProfilePlayerViewForFinder : WCFinderFullNewMultiMediaView <TLProfileBaseMediaView>

@property (readonly, nonatomic) double tl_mediaAspectRatio;
@property (weak, nonatomic) id<TLProfileBaseMediaViewDelegate> tl_profileDelegate;
@property (nonatomic) BOOL tl_muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaWithContentVM:(id)a0;

- (BOOL)isVideo;
- (void)tl_startPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_stopPlayMedia;
- (void)tl_resetPlayMedia;
- (void)onPlayToEnd;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
