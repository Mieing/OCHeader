@class NSString, NSMutableDictionary, AmoebaBridgePageInfo, NSMutableArray;

@interface AmoebaBridgeStandardPageEvent : NSObject

@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) unsigned int pageId;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSMutableArray *routeRules;
@property (retain, nonatomic) AmoebaBridgePageInfo *sourcePageInfo;
@property (retain, nonatomic) AmoebaBridgePageInfo *refPageInfo;

- (id)init;
- (void).cxx_destruct;

@end
