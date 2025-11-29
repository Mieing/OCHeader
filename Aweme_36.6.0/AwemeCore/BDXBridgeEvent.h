@class NSString, NSDictionary;

@interface BDXBridgeEvent : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *eventID;
@property (nonatomic) BOOL isBroadcast;
@property (nonatomic) double bdx_timestamp;

+ (id)eventWithEventName:(id)a0 params:(id)a1;
+ (id)eventWithEventName:(id)a0 params:(id)a1 eventID:(id)a2 isBroadcast:(BOOL)a3;
+ (id)eventWithEventName:(id)a0 params:(id)a1 isBroadcast:(BOOL)a2;

- (void)bdx_updateTimestampWithMillisecondTimestamp:(double)a0;
- (id)initWithEventName:(id)a0 params:(id)a1 isBroadcast:(BOOL)a2;
- (void)bdx_updateTimestampWithCurrentDate;
- (void).cxx_destruct;
- (id)description;

@end
