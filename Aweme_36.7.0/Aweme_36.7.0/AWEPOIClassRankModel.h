@class AWEPOIOptionModel, NSString, NSNumber, AWEPOITypeModel;

@interface AWEPOIClassRankModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *rankDescription;
@property (copy, nonatomic) NSNumber *rankValue;
@property (copy, nonatomic) NSNumber *classCode;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *rankCode;
@property (nonatomic) BOOL canSwitch;
@property (retain, nonatomic) NSString *districtCode;
@property (retain, nonatomic) AWEPOIOptionModel *classOption;
@property (retain, nonatomic) AWEPOIOptionModel *businessAreaOption;
@property (retain, nonatomic) AWEPOITypeModel *poiBackendType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
