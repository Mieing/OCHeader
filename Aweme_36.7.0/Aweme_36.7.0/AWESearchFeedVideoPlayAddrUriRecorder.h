@class NSMutableDictionary;

@interface AWESearchFeedVideoPlayAddrUriRecorder : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

+ (id)sharedInstance;

- (void)recordPlayAddrUriForModel:(id)a0;
- (id)playAddrUriForItemId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
