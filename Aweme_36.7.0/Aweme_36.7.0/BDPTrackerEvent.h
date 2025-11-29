@class NSString, NSMutableDictionary, NSObject;
@protocol NSCopying;

@interface BDPTrackerEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) NSObject<NSCopying> *groupID;

+ (BOOL)hookPerformance;

- (id /* block */)withID;
- (id /* block */)kv;
- (id /* block */)durationFrom;
- (void *)myhook_flush;
- (void)addNetworkParams;
- (void)addMGNetworkParams;
- (void)addMPNetworkParamsIfNeeded;
- (void)addLoginStatusParams;
- (id /* block */)flush;
- (void).cxx_destruct;
- (id /* block */)record;
- (id /* block */)map;
- (id)initWithEventName:(id)a0;

@end
