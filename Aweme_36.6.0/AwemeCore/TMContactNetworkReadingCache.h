@class TMNetworkDetectCache, NSString;

@interface TMContactNetworkReadingCache : NSObject <TMNetworkContentDetectCacheProtocol>

@property (retain, nonatomic) TMNetworkDetectCache *givenNameCache;
@property (retain, nonatomic) TMNetworkDetectCache *middleNameCache;
@property (retain, nonatomic) TMNetworkDetectCache *familyNameCache;
@property (retain, nonatomic) TMNetworkDetectCache *phoneNumberCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)start;
+ (id)sharedInstance;

- (BOOL)detectedByContent:(id)a0 cacheParams:(id)a1;
- (void)asyncUpdateCacheWithName:(id)a0 intoNameCache:(id)a1;
- (void)asyncUpdateCacheWithPhoneNumers:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)cacheItems;

@end
