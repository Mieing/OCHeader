@class NSString, NSDictionary;

@interface AppMonitorEvent : NSObject

@property (retain, nonatomic) NSString *module;
@property (retain, nonatomic) NSString *monitorPoint;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2;
- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2 extraInfo:(id)a3;
- (id)jsonDict;
- (void).cxx_destruct;

@end
