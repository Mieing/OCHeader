@class NSArray, NSString;

@interface AWEThreeDTouchTrackingEventHandler : NSObject <AWEUGEventHandlerProtocol>

@property (copy, nonatomic) NSArray *threeDTouchEventList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEvent:(id)a0 params:(id)a1;
- (id)buildMFRParams:(id)a0 originalParams:(id)a1;
- (id)handledEvents;
- (BOOL)isThreeDTouchEnter:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
