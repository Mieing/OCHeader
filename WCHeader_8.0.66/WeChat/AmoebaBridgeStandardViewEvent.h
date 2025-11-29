@class NSString, NSMutableDictionary, AmoebaBridgePageInfo, NSMutableArray;

@interface AmoebaBridgeStandardViewEvent : NSObject

@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSMutableArray *routeRules;
@property (retain, nonatomic) AmoebaBridgePageInfo *curPageInfo;
@property (retain, nonatomic) AmoebaBridgePageInfo *sourcePageInfo;
@property (retain, nonatomic) AmoebaBridgePageInfo *refPageInfo;

- (id)init;
- (void).cxx_destruct;

@end
