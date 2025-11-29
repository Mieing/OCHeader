@class NSString;

@interface IESECCouponButtonColorConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *leftTextColor;
@property (retain, nonatomic) NSString *rightTextColor;
@property (retain, nonatomic) NSString *leftBackgroundColor;
@property (retain, nonatomic) NSString *rightBackgroundColor;
@property (retain, nonatomic) NSString *borderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
