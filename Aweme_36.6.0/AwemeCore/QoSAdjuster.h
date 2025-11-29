@class NSMutableArray;

@interface QoSAdjuster : NSObject

@property (retain) NSMutableArray *requestQoSAdjusterActions;
@property (retain) NSMutableArray *responseQoSAdjusterActions;
@property BOOL qosAdjusterEnabled;

+ (id)shareInstance;

- (id)adjustQoSInternal:(id)a0 qosAdjusterActions:(id)a1;
- (id)parseQoSAdjusterConfig:(id)a0;
- (void)setLocalQoSAdjusterConfig:(id)a0;
- (id)adjustQoSForRequestThread:(id)a0;
- (id)adjustQoSForResponseThread:(id)a0;
- (void)parseTNCQoSAdjusterConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
