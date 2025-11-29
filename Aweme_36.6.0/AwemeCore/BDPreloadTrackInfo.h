@class NSString, NSError, NSDictionary;

@interface BDPreloadTrackInfo : NSObject

@property (nonatomic) BOOL isWiFi;
@property (retain, nonatomic) NSString *preloadKey;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) long long trafficSize;
@property (nonatomic) double enqueueTime;
@property (nonatomic) double startTime;
@property (nonatomic) double finishTime;
@property (nonatomic) unsigned long long type;

- (id)reportParams;
- (void).cxx_destruct;

@end
