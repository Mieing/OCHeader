@class AWENearbyGrouponCardFrameAttr, NSString, NSDictionary, AWEAwemeModel, AWENearbyC2FeedNicolCardModel, AWENearbyC2TransformerGuideTipCardModel;

@interface AWEGrouponCard : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAwemeModel *awemeInfo;
@property (retain, nonatomic) AWENearbyC2FeedNicolCardModel *dynamicInfo;
@property (retain, nonatomic) AWENearbyC2TransformerGuideTipCardModel *guideTipCard;
@property (retain, nonatomic) AWENearbyGrouponCardFrameAttr *frameAttr;
@property (retain, nonatomic) NSDictionary *showStyle;
@property (retain, nonatomic) NSDictionary *ditoData;
@property (copy, nonatomic) NSString *feedCardUpdateReq;
@property (nonatomic) long long receivedCardNum;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
