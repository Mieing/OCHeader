@class NSMutableArray;

@interface AWELocalLifeGeckoManager : NSObject

@property (retain, nonatomic) NSMutableArray *prefetchChannels;

+ (id)sharedInstance;

- (void)prefetchInLocalLife;
- (void)prefetchWithUrls:(id)a0;
- (id)filterChannels:(id)a0;
- (void)trackChannelDownloadWithChannelName:(id)a0 result:(id)a1;
- (void)prefetchInCodeStart;
- (void).cxx_destruct;
- (id)init;

@end
