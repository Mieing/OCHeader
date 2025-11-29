@class NSString;

@interface BDWebImageCacheConfig : NSObject <BDModelCustom>

@property (nonatomic) unsigned long long maxCacheEntries;
@property (nonatomic) unsigned long long maxCacheEntrySize;
@property (nonatomic) unsigned long long maxCacheSize;
@property (nonatomic) unsigned long long diskCacheMaxCacheSize;
@property (nonatomic) BOOL diskCacheEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
