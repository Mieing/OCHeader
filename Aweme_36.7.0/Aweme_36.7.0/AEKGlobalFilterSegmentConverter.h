@class NLETrack_OC, NSString, NLETrackSlot_OC, NLERefactoredComposerSegment_OC;

@interface AEKGlobalFilterSegmentConverter : NSObject <AEKUpgradeFilterSegmentConvertible>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLERefactoredComposerSegment_OC *segment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTrack:(id)a0 trackSlot:(id)a1 segment:(id)a2;
- (void).cxx_destruct;

@end
