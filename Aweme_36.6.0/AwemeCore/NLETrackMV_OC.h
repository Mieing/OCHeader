@class NSArray, NLEResourceNode_OC, NSString;

@interface NLETrackMV_OC : NLETrack_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETrackMV> { struct NLETrackMV *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *mv;
@property (nonatomic) BOOL singleVideo;
@property (nonatomic) unsigned long long mvResolution;
@property (retain, nonatomic) NLEResourceNode_OC *algorithm;
@property (copy, nonatomic) NSArray *algorithmResults;
@property (copy, nonatomic) NSString *extraParams;

+ (id)mvTrackWithPath:(id)a0 userResources:(id)a1 resourcesDuration:(id)a2 draftFolder:(id)a3;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETrackMV> { struct NLETrackMV *x0; struct __shared_weak_count *x1; })a0;
- (void)updateWithModelPath:(id)a0 userResources:(id)a1 resourcesDuration:(id)a2 draftFolder:(id)a3;
- (void)setResources:(id)a0 resourcesDuration:(id)a1 draftFolder:(id)a2;
- (void)configAlgorithmPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
