@class NLETrack_OC, NSString, NLESegmentComposerFilter_OC, NLETrackSlot_OC;

@interface AEKGlobalFilterConverter : NSObject <AEKFilterConvertible>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLESegmentComposerFilter_OC *segment;
@property (readonly, nonatomic) unsigned long long aek_type;
@property (readonly, nonatomic) long long aek_detailType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTrack:(id)a0;

@end
