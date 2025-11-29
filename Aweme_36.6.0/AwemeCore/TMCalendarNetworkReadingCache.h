@class TMNetworkDetectCache, NSString;

@interface TMCalendarNetworkReadingCache : NSObject <TMNetworkContentDetectCacheProtocol>

@property (retain, nonatomic) TMNetworkDetectCache *titleCache;
@property (retain, nonatomic) TMNetworkDetectCache *locationCache;
@property (retain, nonatomic) TMNetworkDetectCache *URLCache;
@property (retain, nonatomic) TMNetworkDetectCache *notesCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)start;
+ (id)sharedInstance;

- (void)asyncUpdateCacheWithTitle:(id)a0;
- (void)asyncUpdateCacheWithLocation:(id)a0;
- (void)asyncUpdateCacheWithURL:(id)a0;
- (void)asyncUpdateCacheWithNotes:(id)a0;
- (BOOL)detectedByContent:(id)a0 cacheParams:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)cacheItems;

@end
