@class NSArray, IESECURLModel, IESECFeedResourceCardPanelsDecorationInfoModel;

@interface IESECFeedResourceCardPanelsModel : IESECFeedResourceCardBaseNode

@property (retain, nonatomic) IESECURLModel *priceImage;
@property (retain, nonatomic) IESECURLModel *textBackgroundImage;
@property (retain, nonatomic) IESECURLModel *creditBackgroundImage;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long layout;
@property (retain, nonatomic) NSArray *products;
@property (retain, nonatomic) IESECFeedResourceCardPanelsDecorationInfoModel *decoration;
@property (retain, nonatomic) IESECURLModel *backgroundImage;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
