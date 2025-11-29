@class NLETrack_OC, NLEInterface_OC, AWEVideoPublishViewModel, NLEModel_OC, NLETrackSlot_OC;

@interface ACCTrackLoopContext : NSObject

@property (retain, nonatomic) NLEInterface_OC *nle;
@property (retain, nonatomic) NLEModel_OC *originalNleModel;
@property (retain, nonatomic) NLEModel_OC *targetNleModel;
@property (retain, nonatomic) NLETrack_OC *mainTrack;
@property (retain, nonatomic) AWEVideoPublishViewModel *project;
@property (retain, nonatomic) NLETrackSlot_OC *videoSlot;
@property (retain, nonatomic) NLETrackSlot_OC *imageSlot;
@property (nonatomic) long long loopCount;
@property (nonatomic) double singleLoopDuration;
@property (nonatomic) double finalVideoDuration;

+ (id)contextWithProject:(id)a0 originalNleModel:(id)a1 targetNleModel:(id)a2 mainTrack:(id)a3 originalWorkspace:(id)a4;

- (void).cxx_destruct;

@end
