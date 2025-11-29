@class AWEGeneralSearchActivityTagConfigModel;

@interface AWEGeneralSearchActivityTagModel : AWEBaseApiModel

@property (nonatomic) long long tagID;
@property (retain, nonatomic) AWEGeneralSearchActivityTagConfigModel *tagConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
