@class NSString;

@interface AWEPOICOIDoubleItemDisplayMobInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rateStar;
@property (copy, nonatomic) NSString *rateStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
