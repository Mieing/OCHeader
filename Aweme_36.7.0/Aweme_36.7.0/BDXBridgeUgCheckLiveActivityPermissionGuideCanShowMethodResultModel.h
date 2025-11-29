@class NSNumber, NSString;

@interface BDXBridgeUgCheckLiveActivityPermissionGuideCanShowMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *show;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *subBusiness;
@property (copy, nonatomic) NSString *popupTrigger;
@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) id extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
