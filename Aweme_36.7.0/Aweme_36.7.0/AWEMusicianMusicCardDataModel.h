@class NSString;

@interface AWEMusicianMusicCardDataModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *artistID;
@property (copy, nonatomic) NSString *artistName;
@property (nonatomic) unsigned long long musicTabStyle;
@property (nonatomic) unsigned long long selfSwitch;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
