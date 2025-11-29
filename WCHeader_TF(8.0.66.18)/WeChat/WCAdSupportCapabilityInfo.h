@interface WCAdSupportCapabilityInfo : NSObject

@property (nonatomic) unsigned int supportH265;
@property (nonatomic) unsigned int supportWebP;
@property (nonatomic) unsigned int supportAVIF;

+ (id)defaultInfo;
+ (id)compatibleInfo;

- (id)toJsonString;
- (id)fetchCacheKey;

@end
