@class NSString, NSMutableDictionary;

@interface MJAIAssetCacheManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *uploadResultCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
