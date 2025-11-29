@class NLETrack_OC, NSString, NLERefactoredComposerFilter_OC, NLERefactoredComposerSegment_OC;

@interface AEKTrackFilterSegmentConverter : NSObject <AEKUpgradeFilterSegmentConvertible>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NLERefactoredComposerFilter_OC *filter;
@property (retain, nonatomic) NLERefactoredComposerSegment_OC *segment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTrack:(id)a0 filter:(id)a1 segment:(id)a2;
- (void).cxx_destruct;

@end
