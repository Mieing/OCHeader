@class NSDictionary, NSMutableDictionary;

@interface AWEPopViewShowInfo : NSObject

@property (nonatomic) BOOL triggerEventIng;
@property (nonatomic) double recordTriggerEventTime;
@property (nonatomic) double currentTriggerEventTime;
@property (nonatomic) double willShowTime;
@property (nonatomic) double lastCloseTime;
@property (nonatomic) long long eventIndex;
@property (nonatomic) double popIndexAtEvent;
@property (nonatomic) long long popIndex;
@property (nonatomic) long long popExecuteCount;
@property (retain, nonatomic) NSDictionary *showAlertForEventDict;
@property (retain, nonatomic) NSMutableDictionary *eventLastTriggerTimeDict;

- (void).cxx_destruct;
- (id)init;

@end
