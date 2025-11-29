@class NSString, AWEURLModel;

@interface AWEAdSummerCallingChargingCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) AWEURLModel *heartImage;
@property (retain, nonatomic) AWEURLModel *heartFillingImage;
@property (nonatomic) double countdown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
