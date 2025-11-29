@class DVEVideoThumbnailManager, NLETrackSlot_OC;

@interface DVEVideoClipSegmentViewModel : NSObject

@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (retain, nonatomic) NLETrackSlot_OC *curSlot;

- (id)thumbnailOfSlot:(id)a0 index:(long long)a1;
- (void)cancelWithThumbnail:(id)a0 slot:(id)a1;
- (void)videoThumbnailView:(id)a0 didEndDisplayingCell:(id)a1 atIndex:(long long)a2;
- (id)initWithSlot:(id)a0 thumbnailManager:(id)a1;
- (void)cleanThumbnailOfSlot:(id)a0;
- (id)thumbnailsOfSlot:(id)a0;
- (void)fetchAsyncWithThumbnail:(id)a0 completion:(id /* block */)a1;
- (long long)numberOfThumbnailForSlot:(id)a0;
- (void).cxx_destruct;

@end
