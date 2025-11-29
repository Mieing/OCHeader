@class WAJSEventHandler_BaseEvent, JSEvent, NSString;

@interface KindaJSEvent : NSObject <MMKJSEvent>

@property (retain, nonatomic) WAJSEventHandler_BaseEvent *tinyAppEvent;
@property (retain, nonatomic) JSEvent *webEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
