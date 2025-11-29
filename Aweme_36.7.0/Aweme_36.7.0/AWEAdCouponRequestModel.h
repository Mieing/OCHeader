@class NSString;

@interface AWEAdCouponRequestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awardID;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *sceneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
