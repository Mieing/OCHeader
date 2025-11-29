@interface BDACSiOSConfig : NSObject

@property (readonly, nonatomic) long long pornInspectMinImageSize;
@property (readonly, nonatomic) long long maxConcurrentTaskCount;
@property (readonly, nonatomic) long long maxQueueSize;
@property (readonly, nonatomic) long long slardarFlushCount;

- (id)initWithDictionary:(id)a0;

@end
