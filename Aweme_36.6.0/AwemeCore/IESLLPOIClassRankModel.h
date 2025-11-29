@class NSString, IESLLPOITypeModel, NSNumber, IESLLPOIOptionModel;

@interface IESLLPOIClassRankModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *rankDescription;
@property (copy, nonatomic) NSNumber *rankValue;
@property (copy, nonatomic) NSNumber *classCode;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *rankCode;
@property (nonatomic) BOOL canSwitch;
@property (retain, nonatomic) NSString *districtCode;
@property (retain, nonatomic) IESLLPOIOptionModel *classOption;
@property (retain, nonatomic) IESLLPOIOptionModel *businessAreaOption;
@property (retain, nonatomic) IESLLPOITypeModel *poiBackendType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
