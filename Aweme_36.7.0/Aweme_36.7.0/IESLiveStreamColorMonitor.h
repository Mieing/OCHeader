@class NSString, IESLiveAudienceStreamColorSEIResult, NSMutableArray;

@interface IESLiveStreamColorMonitor : NSObject <IESLiveSEIListener>

@property (retain, nonatomic) IESLiveAudienceStreamColorSEIResult *lastResult;
@property (retain, nonatomic) NSMutableArray *resultArray;
@property (nonatomic) double brightnessThreshold;
@property (nonatomic) double saturationThreshold;
@property (nonatomic) double contrastThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enbaleLiveStreamColorMonitor;

- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (id)currentResultArray;
- (void)setUPColorMonitorThreshold;
- (void).cxx_destruct;

@end
