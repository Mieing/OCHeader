@class NSString, AWECodeGenSuctionBottomFrequencyModel;

@interface AWECodeGenSuctionBottomInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *lynxUrl;
@property (nonatomic) int containerHeight;
@property (nonatomic) int duration;
@property (retain, nonatomic) AWECodeGenSuctionBottomFrequencyModel *frequencyControlModel;
@property (copy, nonatomic) NSString *buttonSchema;
@property (nonatomic) long long suctionBottomType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
