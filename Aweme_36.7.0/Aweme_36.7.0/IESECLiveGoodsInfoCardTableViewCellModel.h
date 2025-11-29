@class NSString, IESECLiveGoodsInfoCardTableViewCellConfigModel;

@interface IESECLiveGoodsInfoCardTableViewCellModel : NSObject

@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;
@property (nonatomic) double centerPadding;
@property (retain, nonatomic) IESECLiveGoodsInfoCardTableViewCellConfigModel *configModel;

- (void).cxx_destruct;

@end
