@class NSNumber, NSString, IESForestSwitches;

@interface IESForestQueryParameters : NSObject

@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *onlyOnline;
@property (retain, nonatomic) NSNumber *dynamic;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSNumber *disableGecko;
@property (retain, nonatomic) NSNumber *disableBuiltin;
@property (retain, nonatomic) NSNumber *disableCDN;
@property (retain, nonatomic) NSNumber *disableCDNCache;
@property (retain, nonatomic) NSNumber *onlyLocal;
@property (retain, nonatomic) NSNumber *enableMemoryCache;
@property (retain, nonatomic) NSNumber *disableRequestReuse;
@property (retain, nonatomic) NSNumber *cdnTimeoutInterval;
@property (retain, nonatomic) NSNumber *mainQueueAsCompletionQueue;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSNumber *cdnExpiredTime;
@property (copy, nonatomic) IESForestSwitches *switches;

- (void)mergeWithQueryParameters:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURLString:(id)a0;
- (id)initWithQueryDictionary:(id)a0;

@end
