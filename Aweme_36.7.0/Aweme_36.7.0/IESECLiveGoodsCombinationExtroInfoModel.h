@class NSNumber, NSString;

@interface IESECLiveGoodsCombinationExtroInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isBound;
@property (retain, nonatomic) NSNumber *originMaxPrice;
@property (retain, nonatomic) NSNumber *originMinPrice;
@property (retain, nonatomic) NSNumber *comboMaxPrice;
@property (retain, nonatomic) NSNumber *comboMinPrice;
@property (retain, nonatomic) NSString *cardBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
