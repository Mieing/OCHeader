@class NSString, NSDictionary, NSArray;

@interface AWECampaignLynxPendantViewModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *preloadPosition;
@property (readonly, copy, nonatomic) NSDictionary *extra;
@property (readonly, copy, nonatomic) NSArray *size;
@property (readonly, copy, nonatomic) NSArray *position;
@property (readonly, copy, nonatomic) NSString *inProgressClickUrl;
@property (readonly, copy, nonatomic) NSString *finishClickUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
