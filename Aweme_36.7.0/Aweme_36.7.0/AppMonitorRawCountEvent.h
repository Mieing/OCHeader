@class NSString;

@interface AppMonitorRawCountEvent : AppMonitorEvent <AppMonitorRawEventProtocol>

@property (nonatomic) long long count;
@property (nonatomic) double value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseRawUTMsg:(id)a0;

- (id)dumpToUTEvent;
- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2 value:(double)a3 extraInfo:(id)a4;
- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2 value:(double)a3;

@end
