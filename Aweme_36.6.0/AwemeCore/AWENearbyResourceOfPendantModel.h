@class AWENearbyResourceOfCommonData, NSString;

@interface AWENearbyResourceOfPendantModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyResourceOfCommonData *commonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
