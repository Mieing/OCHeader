@class IESLiveThreadSafeDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLivePerformanceIntrospection : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableTrack;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *threadStrategy;

+ (id)introspectWithStrategy:(id)a0;
+ (id /* block */)introspectionWithQueue:(id)a0 block:(id /* block */)a1;
+ (BOOL)enable;
+ (id)shared;

- (void)trackEventWithCode:(long long)a0 desc:(id)a1 item:(id)a2;
- (void)introspect;
- (void).cxx_destruct;
- (id)init;
- (void)setupConfig;

@end
