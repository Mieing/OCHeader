@class NSString, NSDictionary;

@interface IESECLynxCardBridgeEvent : NSObject

@property (readonly, nonatomic) double IESECLynxCard_timestamp;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *eventID;
@property (nonatomic) BOOL isBroadcast;
@property (copy, nonatomic) NSString *listContextId;
@property (nonatomic) BOOL isGlobal;
@property (nonatomic) BOOL isSticky;

+ (id)eventWithEventName:(id)a0 params:(id)a1 eventID:(id)a2 isBroadcast:(BOOL)a3;
+ (id)eventWithEventName:(id)a0 params:(id)a1 isBroadcast:(BOOL)a2;
+ (id)eventWithEventName:(id)a0 params:(id)a1 listContextId:(id)a2;
+ (id)eventWithEventName:(id)a0 params:(id)a1 isGlobal:(BOOL)a2 listContextId:(id)a3;

- (id)initWithEventName:(id)a0 params:(id)a1 isBroadcast:(BOOL)a2;
- (void)IESECLynxCard_updateTimestampWithMillisecondTimestamp:(double)a0;
- (void)setIESECLynxCard_timestamp:(double)a0;
- (void)IESECLynxCard_updateTimestampWithCurrentDate;
- (void).cxx_destruct;
- (id)description;

@end
