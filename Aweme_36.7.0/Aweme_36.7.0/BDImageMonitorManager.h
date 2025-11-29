@interface BDImageMonitorManager : NSObject

+ (void)trackData:(id)a0 logTypeStr:(id)a1;
+ (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
+ (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)performMonitorCallbackWithLogType:(id)a0 attributes:(id)a1 extra0:(id)a2 extra1:(id)a3;

@end
