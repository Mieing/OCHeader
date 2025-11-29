@class NSString;

@interface Saber.BasicTiming : NSObject <Saber.Timing> {
    void /* function */ id;
    void /* unknown type, empty encoding */ dataChannel;
    void /* unknown type, empty encoding */ channelTiming;
    void /* unknown type, empty encoding */ contextFilter;
}

@property (nonatomic, readonly) NSString *id;

+ (id)makeTiming:(id)a0 withConfig:(id)a1;

- (id)initWithId:(id)a0 dataChannel:(long long)a1 channelTiming:(id)a2 contextFilter:(id /* block */)a3;
- (BOOL)listenerToDataChannel:(long long)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
