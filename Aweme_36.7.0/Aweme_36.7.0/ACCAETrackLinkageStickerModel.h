@class NSString;
@protocol AEKRenderTimeOperator;

@interface ACCAETrackLinkageStickerModel : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<AEKRenderTimeOperator> oldSticker;
@property (retain, nonatomic) id<AEKRenderTimeOperator> currentSticker;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } oldStickerTimeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } currStickerTimeRange;

- (void).cxx_destruct;

@end
