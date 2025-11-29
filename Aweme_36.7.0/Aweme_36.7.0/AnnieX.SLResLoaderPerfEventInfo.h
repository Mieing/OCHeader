@class NSMutableDictionary;

@interface AnnieX.SLResLoaderPerfEventInfo : NSObject {
    void /* unknown type, empty encoding */ __rts_res_loader_info;
    void /* unknown type, empty encoding */ __rts_res_info;
    void /* unknown type, empty encoding */ __rts_res_load_perf;
    void /* unknown type, empty encoding */ __rts_res_load_error;
}

@property (nonatomic, retain) NSMutableDictionary *res_loader_info;
@property (nonatomic, retain) NSMutableDictionary *res_info;
@property (nonatomic, retain) NSMutableDictionary *res_load_perf;
@property (nonatomic, retain) NSMutableDictionary *res_load_error;

- (void).cxx_destruct;
- (id)init;

@end
