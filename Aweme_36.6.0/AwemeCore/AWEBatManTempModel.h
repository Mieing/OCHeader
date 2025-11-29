@class NSString, AWEBatManTempEntranceInfoModel;

@interface AWEBatManTempModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *batManId;
@property (retain, nonatomic) AWEBatManTempEntranceInfoModel *entranceInfo;
@property (copy, nonatomic) NSString *batManName;
@property (copy, nonatomic) NSString *batManTag;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *buttonMapURL;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) int orientationType;
@property (copy, nonatomic) NSString *gameIcon;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameDescription;
@property (copy, nonatomic) NSString *schemaUrl;

+ (id)entranceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
