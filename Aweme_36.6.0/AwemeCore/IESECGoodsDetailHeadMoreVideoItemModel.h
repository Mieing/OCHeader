@class NSString, IESECHeadVideoModel, NSDictionary;

@interface IESECGoodsDetailHeadMoreVideoItemModel : IESECBaseApiModel

@property (retain, nonatomic) IESECHeadVideoModel *video;
@property (retain, nonatomic) IESECHeadVideoModel *previewVideo;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (nonatomic) double whScale;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
