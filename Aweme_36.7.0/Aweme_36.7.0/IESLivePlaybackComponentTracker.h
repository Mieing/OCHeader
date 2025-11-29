@class HTSEventContext, NSMutableDictionary;

@interface IESLivePlaybackComponentTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsDic;
@property (retain, nonatomic) NSMutableDictionary *componentsInitMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsWillMountMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsDidMountMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsUnMountMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsWillAppearMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsDidAppearMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsWillDisAppearMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsDidDisAppearMetrics;
@property (nonatomic) BOOL hasReported;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)reportForEvent:(id)a0 para:(id)a1;
- (void)recordComponentStartSatge:(unsigned long long)a0;
- (void)recordComponentEndSatge:(unsigned long long)a0;
- (void)recordComponent:(id)a0 cycle:(unsigned long long)a1 duration:(double)a2;
- (id)getNameWithComponentStage:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;

@end
