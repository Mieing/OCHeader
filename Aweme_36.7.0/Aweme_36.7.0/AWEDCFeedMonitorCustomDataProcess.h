@class NSString, AWEDCFeedMonitorDataForProcess, NSObject;
@protocol OS_dispatch_queue;

@interface AWEDCFeedMonitorCustomDataProcess : NSObject <AWEDCFeedMonitorCustomDataProcessProtocol> {
    NSString *_scene;
    NSString *_event;
    NSObject<OS_dispatch_queue> *_commonQueue;
    AWEDCFeedMonitorDataForProcess *_dataForProcess;
}

@property (nonatomic) BOOL enableSeparateEvent;
@property (nonatomic) BOOL useSampleTrack;
@property (nonatomic) long long sampleValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtra:(id)a0;
- (void)setCommonParams:(id)a0;
- (double)timeDuration;
- (void)recordCurrentDurationWithEvent:(id)a0;
- (void)finishWithExtra:(id)a0;
- (id)initWithScene:(id)a0 event:(id)a1 queue:(id)a2;
- (id)generalJsonStringWithDict:(id)a0;
- (void)finishEvent;
- (void).cxx_destruct;
- (void)beginEvent;

@end
