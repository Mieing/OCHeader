@class IESECURLModel, NSString, NSArray, IESECRelationGoodsModel, IESECWinVideoProductHangingModel;

@interface IESECWinVideoProductObject : NSObject <IGListDiffable>

@property (retain, nonatomic) IESECWinVideoProductHangingModel *videoProduct;
@property (retain, nonatomic) IESECURLModel *videoCover;
@property (retain, nonatomic) IESECURLModel *videoPlayAddr;
@property (retain, nonatomic) NSString *videoDurationText;
@property (retain, nonatomic) NSString *contentTitle;
@property (copy, nonatomic) NSArray *productImageArray;
@property (retain, nonatomic) NSString *productTitle;
@property (retain, nonatomic) IESECRelationGoodsModel *product;
@property (retain, nonatomic) IESECRelationGoodsModel *priceModel;
@property (nonatomic) double videoAspectRatio;
@property (nonatomic) long long currentDuration;
@property (nonatomic) unsigned long long tabLayoutType;
@property (nonatomic) double contentWidth;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)playItem;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void)configCurrentDuration;
- (void).cxx_destruct;

@end
