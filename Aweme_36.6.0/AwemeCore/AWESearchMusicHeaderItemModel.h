@class NSString, AWEURLModel;

@interface AWESearchMusicHeaderItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) AWEURLModel *iconLightUrl;
@property (retain, nonatomic) AWEURLModel *iconDarkUrl;

+ (id)isSelectedJSONTransformer;
+ (id)iconLightUrlJSONTransformer;
+ (id)iconDarkUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
