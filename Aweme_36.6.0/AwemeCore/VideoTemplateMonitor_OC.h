@protocol VideoTemplateMonitorDelegate;

@interface VideoTemplateMonitor_OC : NSObject

@property (retain, nonatomic) id<VideoTemplateMonitorDelegate> delegate;

+ (void)trackService:(id)a0 statusCode:(long long)a1 errorMsg:(id)a2 duration:(long long)a3 templateURL:(id)a4 templateID:(id)a5 isNLETemplate:(BOOL)a6 extra:(id)a7;
+ (void)trackService:(id)a0 statusCode:(long long)a1 errorMsg:(id)a2 duration:(long long)a3 templateURL:(id)a4 templateID:(id)a5 isNLETemplate:(BOOL)a6 resourceCount:(long long)a7;
+ (void)registerDelegate:(id)a0;
+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
