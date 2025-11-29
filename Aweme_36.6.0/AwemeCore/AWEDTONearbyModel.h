@class NSString, NSDictionary;

@interface AWEDTONearbyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *defaultCircleId;
@property (copy, nonatomic) NSString *douyinCircleId;
@property (copy, nonatomic) NSString *douyinCircleName;
@property (nonatomic) long long douyinNearbyPublishMode;
@property (nonatomic) long long douyinCirclePublishType;
@property (copy, nonatomic) NSDictionary *douyinCircleMocParams;
@property (nonatomic) BOOL poiFootprintVideo;
@property (copy, nonatomic) NSString *nearbyPublishDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
