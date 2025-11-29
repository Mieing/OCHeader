@class NSString, NSArray;

@interface AWECodeGenPauseSearchModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSArray *keyWordsArray;
@property (nonatomic) int showAisearchEntrance;
@property (copy, nonatomic) NSString *mediaType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
