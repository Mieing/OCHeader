@class NSData;

@interface WCFinderRealTimeSyncFeedInfoCGIParam : NSObject

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) long long exposeTimeStamp;

- (id)fullDescription;
- (void).cxx_destruct;

@end
