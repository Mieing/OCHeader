@class DVEVideoThumbnailManager, DVEVideoClipTimelineCalculator, NLETrackSlot_OC;

@interface DVEVideoClipRangeSelectViewModel : NSObject

@property (retain, nonatomic) NLETrackSlot_OC *curSlot;
@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (retain, nonatomic) DVEVideoClipTimelineCalculator *timelineCalculator;

- (double)currentContentWidth;
- (double)contentOffsetOfSlot:(id)a0;
- (id)initWithSlot:(id)a0 thumbnailManager:(id)a1;
- (void).cxx_destruct;

@end
