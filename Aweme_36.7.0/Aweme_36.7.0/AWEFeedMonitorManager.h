@interface AWEFeedMonitorManager : NSObject

+ (id)commonParamsWithModel:(id)a0 error:(id)a1 enterFrom:(id)a2 awemeType:(long long)a3;
+ (id)commonParamsWithLogId:(id)a0 error:(id)a1 enterFrom:(id)a2;
+ (id)errorParamsWithAwemeModel:(id)a0;
+ (id)commonParamsWithLogId:(id)a0 error:(id)a1 enterFrom:(id)a2 awemeType:(long long)a3;
+ (id)errorParamsForEmpty;
+ (id)errorParamsNotMixWithAwemeModel:(id)a0;
+ (id)errorParamsWithError:(id)a0 isNetworkError:(BOOL)a1;
+ (id)errorParamsWithMixModel:(id)a0;

@end
