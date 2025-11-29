@class NSString, IESECCouponButtonCountDownModel, IESECLiveImageURLModel;

@interface IESECCouponButtonElementModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long elementType;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESECLiveImageURLModel *icon;
@property (retain, nonatomic) IESECCouponButtonCountDownModel *countdown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
