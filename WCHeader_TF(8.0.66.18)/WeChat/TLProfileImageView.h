@class NSString;
@protocol TLProfileBaseMediaViewDelegate;

@interface TLProfileImageView : UIImageView <TLProfileBaseMediaView>

@property (readonly, nonatomic) double tl_mediaAspectRatio;
@property (weak, nonatomic) id<TLProfileBaseMediaViewDelegate> tl_profileDelegate;
@property (nonatomic) BOOL tl_muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tl_startPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_stopPlayMedia;

@end
