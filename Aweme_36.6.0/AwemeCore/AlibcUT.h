@interface AlibcUT : NSObject

+ (void)setGlobalProperty:(id)a0 forKey:(id)a1;
+ (void)addTraceLog:(id)a0 page:(id)a1 label:(id)a2 interval:(long long)a3 propertys:(id)a4;
+ (void)addTradeLogWithEventID:(struct NSString { Class x0; } *)a0 arg1:(id)a1 arg2:(id)a2 arg3:(id)a3 args:(id)a4;
+ (void)addTraceLog:(id)a0;
+ (void)addTraceLog:(id)a0 label:(id)a1 interval:(long long)a2 propertys:(id)a3;
+ (void)addTradeLogWithEventID:(struct NSString { Class x0; } *)a0 arg1:(id)a1 args:(id)a2;
+ (id)globalPropertyForKey:(id)a0;
+ (void)addTraceLog:(id)a0 propertys:(id)a1;
+ (void)initUT;
+ (void)addTrackToTracker:(id)a0 eventLabel:(id)a1 properties:(id)a2;
+ (void)appIsOpenSet;
+ (BOOL)isThird;
+ (BOOL)h5UT:(id)a0 view:(id)a1 viewController:(id)a2;
+ (void)addTradeLog:(id)a0 eventID:(id)a1 page:(id)a2 arg1:(id)a3 arg2:(id)a4 arg3:(id)a5 args:(id)a6;
+ (void)setChannel:(id)a0;
+ (void)initialize;
+ (BOOL)isAvailable;

@end
