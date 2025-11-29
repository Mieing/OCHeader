@class NSDictionary, IESECGoodsDetailReplayVideoModel, NSString;

@interface IESECGoodsDetailReplayResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailReplayVideoModel *video;
@property (copy, nonatomic) NSDictionary *videoV2;
@property (nonatomic) float cutOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
