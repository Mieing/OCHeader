@class NSString, IESIMCommonAsyncQueueMeasurement, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMCommonAsyncQueue : AWEIMComponentBase <IESIMCommonAsyncQueueProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncQueue;
@property (retain) IESIMCommonAsyncQueueMeasurement *measurement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
