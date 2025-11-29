@class NSArray, DVETrackPanelContext;
@protocol DVEEditConfigProtocol;

@interface DVETimelineRulerViewModel : NSObject

@property (nonatomic) long long framesPerSecond;
@property (copy, nonatomic) NSArray *references;
@property (weak, nonatomic) id<DVEEditConfigProtocol> editConfig;
@property (readonly, nonatomic) DVETrackPanelContext *context;
@property (nonatomic) double videoTrackWidth;

+ (double)maxGraduationInterval;
+ (double)minGraduationInterval;

- (id)buildRulerModel;
- (id)formateReference:(double)a0;
- (double)mostSuitableReferenceValue;
- (double)secondsWithReference:(double)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
