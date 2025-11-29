@class NSString, AVAudioPCMBuffer, NSDate;

@interface WAUniversalAudioPlayerCacheItem : NSObject

@property (retain, nonatomic) AVAudioPCMBuffer *cache;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long totalBytes;
@property (retain, nonatomic) NSDate *lastAccessDate;

- (id)initWithCache:(id)a0 identifier:(id)a1;
- (id)accessCache;
- (void).cxx_destruct;

@end
