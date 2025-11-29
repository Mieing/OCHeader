@class IESECLiveGoodsReplayVideoModel, IESECLiveGoodsModel, NSDictionary, NSArray, NSString, IESECLiveImageURLModel;

@interface IESECLiveGoodsReplayItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveGoodsModel *goodsModel;
@property (nonatomic) long long commentaryType;
@property (retain, nonatomic) IESECLiveGoodsReplayVideoModel *video;
@property (retain, nonatomic) IESECLiveGoodsReplayVideoModel *videoV2;
@property (retain, nonatomic) IESECLiveImageURLModel *bgPic;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *videoMbr;
@property (retain, nonatomic) NSArray *subtitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)goodsModelJSONTransformer;
+ (id)subtitlesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
