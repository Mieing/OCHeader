@class NSNumber, NSString, IESLLPOIServiceSpuEntryModel, IESLLifeURLModel;

@interface IESLLPOIProductModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productUrl;
@property (copy, nonatomic) NSString *tagTitle;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonUrl;
@property (retain, nonatomic) IESLLifeURLModel *imageUrl;
@property (copy, nonatomic) NSString *selledNum;
@property (retain, nonatomic) IESLLPOIServiceSpuEntryModel *detailEntry;
@property (retain, nonatomic) IESLLPOIServiceSpuEntryModel *buttonEntry;
@property (retain, nonatomic) NSNumber *houseFinenessType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
