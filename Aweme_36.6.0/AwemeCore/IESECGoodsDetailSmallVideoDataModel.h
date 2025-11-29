@class NSDictionary, IESECHeadVideoModel;

@interface IESECGoodsDetailSmallVideoDataModel : IESECBaseApiModel

@property (retain, nonatomic) IESECHeadVideoModel *video;
@property (copy, nonatomic) NSDictionary *videoTrackMeta;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
