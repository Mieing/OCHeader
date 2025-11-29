@class NSDictionary, NSMutableDictionary;

@interface AnnieX.SLPerformanceEventInfo : NSObject {
    void /* unknown type, empty encoding */ __rts_container_timing;
}

@property (nonatomic, retain) NSMutableDictionary *container_timing;
@property (nonatomic, retain) NSDictionary *webview_metrics;
@property (nonatomic, retain) NSDictionary *webview_timing;
@property (nonatomic, retain) NSDictionary *webview_navigation_timing;
@property (nonatomic, retain) NSMutableDictionary *lynx_timing;

- (void).cxx_destruct;
- (id)init;

@end
