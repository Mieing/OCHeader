@class BDPThreadSafeDictionary;

@interface BDPEventTracerModel : NSObject

@property (retain, nonatomic) BDPThreadSafeDictionary *eventDict;

- (void)recordEvent:(id)a0 at:(double)a1;
- (double)durationFrom:(id)a0 to:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
