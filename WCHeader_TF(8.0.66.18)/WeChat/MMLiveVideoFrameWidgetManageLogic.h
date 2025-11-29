@class OrderedDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface MMLiveVideoFrameWidgetManageLogic : NSObject

@property (retain, nonatomic) OrderedDictionary *renderWidgetDict;
@property (retain, nonatomic) OrderedDictionary *transmitWidgetDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *renderWidgetDictLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *transmitWidgetDictLock;

- (id)init;
- (void)initDefaultData;
- (void)addRenderVideoFrameWidget:(id)a0;
- (void)insertRenderVideoFrameWidgetToBack:(id)a0;
- (void)removeRenderVideoFrameWidget:(id)a0;
- (void)removeRenderVideoFrameWidgetWithId:(id)a0;
- (id)getVideoFrameWidgetListBeforeRender;
- (void)addTransmitVideoFrameWidget:(id)a0;
- (void)insertTransmitVideoFrameWidgetToBack:(id)a0;
- (void)removeTransmitVideoFrameWidget:(id)a0;
- (void)removeTransmitVideoFrameWidgetWithId:(id)a0;
- (id)getVideoFrameWidgetListBeforeTransmit;
- (void).cxx_destruct;

@end
