@class NSString, IESECWinReplayProductImageModel, IESECRelationGoodsModel, IESECWinReplayVideoModel;

@interface IESECWinReplayCollectionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *slMainTitle;
@property (copy, nonatomic) NSString *slSubtitle;
@property (copy, nonatomic) NSString *dlMainTitle;
@property (copy, nonatomic) NSString *dlSubtitle;
@property (retain, nonatomic) IESECWinReplayVideoModel *video;
@property (retain, nonatomic) IESECWinReplayProductImageModel *image0;
@property (retain, nonatomic) IESECWinReplayProductImageModel *image1;
@property (retain, nonatomic) IESECWinReplayProductImageModel *image2;
@property (retain, nonatomic) IESECRelationGoodsModel *product;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
