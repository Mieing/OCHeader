@class NSString, NSNumber, IESECGoodsInstallmentDescModel;

@interface IESECGoodsInstallmentItermModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) IESECGoodsInstallmentDescModel *benefitDesc;
@property (copy, nonatomic) NSString *benefitDetail;
@property (copy, nonatomic) NSString *benefitService;
@property (copy, nonatomic) NSString *topTag;
@property (nonatomic) BOOL shouldShowTopTag;
@property (retain, nonatomic) NSNumber *installmentCount;
@property (nonatomic) BOOL subTitleHighlight;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
