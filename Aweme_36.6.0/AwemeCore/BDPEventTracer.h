@class BDPThreadSafeDictionary;

@interface BDPEventTracer : NSObject

@property (retain, nonatomic) BDPThreadSafeDictionary *tracerGroups;

+ (void)clearGroup:(id)a0;
+ (void)recordEvent:(id)a0 group:(id)a1;
+ (double)durationFrom:(id)a0 to:(id)a1 group:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
