@class NSString, NSNumber;

@interface IESECGoodsPOIDetailModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSNumber *distance;
@property (copy, nonatomic) NSString *distanceDesc;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *poiPhone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
