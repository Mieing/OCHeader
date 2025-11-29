@interface SalamanderAnnieX.IGetDeviceStatsMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_memory_all;
    void /* unknown type, empty encoding */ __rts_memory_use;
    void /* unknown type, empty encoding */ __rts_memory_rest;
    void /* unknown type, empty encoding */ __rts_memory_limit;
    void /* unknown type, empty encoding */ __rts_cpu_usage;
    void /* unknown type, empty encoding */ __rts_temperature;
}

@property (nonatomic) BOOL memory_all;
@property (nonatomic) BOOL memory_use;
@property (nonatomic) BOOL memory_rest;
@property (nonatomic) BOOL memory_limit;
@property (nonatomic) BOOL cpu_usage;
@property (nonatomic) BOOL temperature;

- (id)init:(BOOL)a0 :(BOOL)a1 :(BOOL)a2 :(BOOL)a3 :(BOOL)a4 :(BOOL)a5;
- (id)init;

@end
