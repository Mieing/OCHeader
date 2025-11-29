@class NSNumber, IESECURLModel, NSString;

@interface IESECGoodsDetailCouponUrgeInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *couponMetaId;
@property (nonatomic) long long credit;
@property (nonatomic) double startTime;
@property (nonatomic) double expireTime;
@property (nonatomic) long long showTimePerDay;
@property (retain, nonatomic) NSNumber *couponType;
@property (retain, nonatomic) NSNumber *couponID;
@property (retain, nonatomic) IESECURLModel *couponBgImg;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *descShort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
