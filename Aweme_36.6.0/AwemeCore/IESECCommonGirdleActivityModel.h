@class NSString, IESECURLModel;

@interface IESECCommonGirdleActivityModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESECURLModel *bgPicture;
@property (retain, nonatomic) IESECURLModel *bgLeftPicture;
@property (retain, nonatomic) IESECURLModel *bgMidPicture;
@property (retain, nonatomic) IESECURLModel *bgRightPicture;
@property (copy, nonatomic) NSString *effectivePriceDesc;
@property (copy, nonatomic) NSString *discountPriceDesc;
@property (copy, nonatomic) NSString *regularPriceDesc;
@property (copy, nonatomic) NSString *priceDesc;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
