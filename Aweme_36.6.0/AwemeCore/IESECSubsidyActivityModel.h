@class NSNumber, IESECURLModel, NSString;

@interface IESECSubsidyActivityModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *backgroundURL;
@property (retain, nonatomic) IESECURLModel *logoURL;
@property (retain, nonatomic) NSNumber *sellPrice;
@property (retain, nonatomic) NSNumber *sellMaxPrice;
@property (copy, nonatomic) NSString *marketPriceDesc;
@property (copy, nonatomic) NSString *subsidyPriceDesc;
@property (retain, nonatomic) IESECURLModel *subsidySellPriceIcon;
@property (copy, nonatomic) NSString *sellPriceDescription;
@property (retain, nonatomic) NSNumber *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
