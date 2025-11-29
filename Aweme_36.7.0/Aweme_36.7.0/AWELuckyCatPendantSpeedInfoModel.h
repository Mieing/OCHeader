@class AWELuckyCatPendantCircleInfoModel, NSString;

@interface AWELuckyCatPendantSpeedInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELuckyCatPendantCircleInfoModel *thisCircleInfo;
@property (retain, nonatomic) AWELuckyCatPendantCircleInfoModel *nextCircleInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
