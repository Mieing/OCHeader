@class NSString, NSMutableDictionary, NSObject, NSMutableArray;

@interface AmoebaEventData : NSObject

@property (retain, nonatomic) NSObject *target;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSMutableArray *routeRules;
@property (nonatomic) BOOL isBringPageInfo;
@property (nonatomic) unsigned long long time;

- (id)init;
- (void)withParams:(id)a0;
- (void)withRouteRules:(id)a0;
- (id)toString;
- (void).cxx_destruct;

@end
