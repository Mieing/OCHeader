@class NSDictionary, NSMutableDictionary, IESECDLBuilder;

@interface IESECDLEventHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventMap;
@property (retain, nonatomic) IESECDLBuilder *builder;
@property (copy, nonatomic) NSDictionary *eventGroup;

- (void)bindEvent;
- (id)makeEventDataWithUniqueID:(id)a0;
- (void)triggerEventWithEventType:(id)a0 eventData:(id)a1;
- (void)registerEventWithEventType:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
