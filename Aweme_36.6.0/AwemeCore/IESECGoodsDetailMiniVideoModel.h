@class NSString, IESECHeadVideoModel, NSDictionary;

@interface IESECGoodsDetailMiniVideoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECHeadVideoModel *video;
@property (copy, nonatomic) NSString *openLink;
@property (copy, nonatomic) NSDictionary *videoTrackMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
