@class NSString;

@interface AWECFCougar : NSObject <BDBDMonitorClass>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setCustomContextValue:(id)a0 forKey:(id)a1;
+ (void)setCustomFilterValue:(id)a0 forKey:(id)a1;
+ (void)trackData:(id)a0 logTypeStr:(id)a1;
+ (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
+ (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)removeCustomFilterKey:(id)a0;
+ (id)monitorManager;
+ (void)trackData:(id)a0;
+ (void)event:(id)a0 label:(id)a1 durations:(float)a2 needAggregate:(BOOL)a3;
+ (id)monitorInstance;
+ (id)inJectedInfoInstance;


@end
