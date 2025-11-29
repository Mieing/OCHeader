@class NSArray;
@protocol ACCTrimCropSequencePieceServiceProtocol;

@interface ACCAdvanceEditMainTrackDataSource : NSObject

@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (copy, nonatomic) NSArray *mainSlots;
@property (copy, nonatomic) NSArray *frameSlots;

- (void).cxx_destruct;

@end
