@class NSMutableArray, NLETrackSlot_OC;
@protocol ACCTrimCropPieceProtocol;

@interface ACCAdvanceEditMainTrackSlotItemData : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeClipStart;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeClipEnd;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> piece;
@property (readonly, nonatomic) NLETrackSlot_OC *parentSlot;
@property (retain, nonatomic) NSMutableArray *slotFrameDatas;

- (void).cxx_destruct;
- (id)init;

@end
