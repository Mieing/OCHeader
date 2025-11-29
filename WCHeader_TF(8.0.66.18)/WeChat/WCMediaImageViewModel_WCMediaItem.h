@class WCMediaItem;

@interface WCMediaImageViewModel_WCMediaItem : WCMediaImageViewModel

@property (readonly, nonatomic) WCMediaItem *mediaItem;

- (id)initWithMediaItem:(id)a0;
- (BOOL)isLivePhoto;
- (void)fillExtraDataInImageMaterial:(id)a0;
- (void).cxx_destruct;

@end
