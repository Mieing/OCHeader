@class NSString;

@interface AWECommerceSearchEnterLiveInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterLiveIconLight;
@property (copy, nonatomic) NSString *enterLiveIconDark;
@property (copy, nonatomic) NSString *enterLiveDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
