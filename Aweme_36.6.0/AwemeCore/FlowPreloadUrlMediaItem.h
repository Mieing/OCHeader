@class NSString;

@interface FlowPreloadUrlMediaItem : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) long long preloadSize;
@property (nonatomic) unsigned long long preloadPriority;

- (id)init:(id)a0;
- (void).cxx_destruct;

@end
