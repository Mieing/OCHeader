@class AWEGeneralSearchHeaderBackgroundModel, AWEGeneralSearchResultHearderBackgroundModel, AWEGeneralSearchResultAnimationBackgroundModel, AWEGeneralSearchResultBackgroundModel;

@interface AWEGeneralSearchBackgroundModel : AWEBaseApiModel

@property (retain, nonatomic) AWEGeneralSearchHeaderBackgroundModel *headerBackgroundModel;
@property (retain, nonatomic) AWEGeneralSearchResultHearderBackgroundModel *resultHeaderBackgroundModel;
@property (retain, nonatomic) AWEGeneralSearchResultBackgroundModel *resultBackgroundModel;
@property (retain, nonatomic) AWEGeneralSearchResultAnimationBackgroundModel *resultAnimationBackgroundModel;
@property (nonatomic) double isAlwaysDisplayWhenScroll;

+ (id)headerBackgroundModelJSONTransformer;
+ (id)resultHeaderBackgroundModelJSONTransformer;
+ (id)resultBackgroundModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
