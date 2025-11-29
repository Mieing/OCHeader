@class AWEPOIServiceSpuEntryModel, NSString, NSNumber, AWEURLModel;

@interface AWEPOIProductModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productUrl;
@property (copy, nonatomic) NSString *tagTitle;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonUrl;
@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (copy, nonatomic) NSString *selledNum;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *detailEntry;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *buttonEntry;
@property (retain, nonatomic) NSNumber *houseFinenessType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
