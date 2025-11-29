@class NSString, NSArray;

@interface AWECampaignKPopupTimeRange : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *showID;
@property (copy, nonatomic) NSArray *showTimes;
@property (nonatomic) BOOL showToAllUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
