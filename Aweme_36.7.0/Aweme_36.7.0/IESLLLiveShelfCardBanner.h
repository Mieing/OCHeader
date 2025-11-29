@class NSString, NSNumber;

@interface IESLLLiveShelfCardBanner : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiCity;
@property (copy, nonatomic) NSString *poiDistrict;
@property (copy, nonatomic) NSString *poiTown;
@property (copy, nonatomic) NSString *poiRankName;
@property (copy, nonatomic) NSString *userDistance;
@property (copy, nonatomic) NSNumber *userLocateScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
