@class NSString, AWEAwemeModel, AWESearchVSVideoBottomBarModel, AWEURLModel;

@interface AWESearchVSVideoCardModel : AWEBaseApiModel

@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long liveType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWESearchVSVideoBottomBarModel *bottomBarModel;
@property (retain, nonatomic) AWEURLModel *backgroundImage;

+ (id)awemeModelJSONTransformer;
+ (id)bottomBarModelJSONTransformer;
+ (id)backgroundImageJSONTransformer;
+ (id)lightBackgroundImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
