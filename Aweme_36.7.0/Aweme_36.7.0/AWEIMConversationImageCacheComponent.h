@class NSString, YYMemoryCache;

@interface AWEIMConversationImageCacheComponent : AWEIMComponentBase <AWEIMConversationImageCacheComponentInterface>

@property (retain, nonatomic) YYMemoryCache *coverImageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
