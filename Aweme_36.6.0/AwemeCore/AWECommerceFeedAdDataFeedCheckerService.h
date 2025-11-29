@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWECommerceFeedAdDataFeedCheckerService : HTSService <AWECommerceFeedAdDataFeedCheckerService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkAdModel:(id)a0 data:(id)a1;
- (id)jsonStringWithModel:(id)a0;
- (void)trackException:(id)a0;
- (void)trackWithScene:(id)a0 extraParams:(id)a1 awemeModel:(id)a2;
- (void)checkAdModel:(id)a0;
- (void)checkAdModelDebug:(id)a0;
- (void).cxx_destruct;

@end
