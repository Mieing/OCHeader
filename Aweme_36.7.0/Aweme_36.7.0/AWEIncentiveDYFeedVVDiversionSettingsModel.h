@class NSArray, NSString;

@interface AWEIncentiveDYFeedVVDiversionSettingsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long switchEnable;
@property (nonatomic) BOOL isCollectUser;
@property (copy, nonatomic) NSArray *feedList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
