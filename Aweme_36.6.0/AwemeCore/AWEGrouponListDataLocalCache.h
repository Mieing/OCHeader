@class AWEGrouponCacheToken, NSString, AWEGrouponListDataResponse;

@interface AWEGrouponListDataLocalCache : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponListDataResponse *grouponFeedRsp;
@property (retain, nonatomic) AWEGrouponCacheToken *cacheToken;
@property (nonatomic) long long lynxContainerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithGrouponFeedRsp:(id)a0;
- (void).cxx_destruct;

@end
