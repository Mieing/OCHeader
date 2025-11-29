@class AWENearbyFeedColdCacheToken, NSString, AWEBaseApiModel;

@interface AWENearbyFeedColdCache : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyFeedColdCacheToken *token;
@property (retain, nonatomic) AWEBaseApiModel *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
