@class IESECListKitListModel, NSArray, NSString, IESECWinBFFBaseInfoModel;

@interface IESECWinTabBFFResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECListKitListModel *feed;
@property (copy, nonatomic) NSArray *topCardList;
@property (retain, nonatomic) IESECWinBFFBaseInfoModel *baseInfo;
@property (copy, nonatomic) NSString *categoryData;

+ (id)topCardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
