@class AWECommentModel, AWEBarrageViewerModel, AWEBarrageDiggModel, AWEBarrageGoldLikeModel, AWEBarrageCoinModel, AWEURLModel;

@interface AWEBarrageModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWECommentModel *comment;
@property (retain, nonatomic) AWEBarrageDiggModel *digg;
@property (retain, nonatomic) AWEBarrageViewerModel *viewer;
@property (retain, nonatomic) AWEBarrageCoinModel *coin;
@property (retain, nonatomic) AWEBarrageGoldLikeModel *goldLike;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;

+ (id)commentJSONTransformer;
+ (id)diggUserJSONTransformer;
+ (id)viewerUserJSONTransformer;
+ (id)coinJSONTransformer;
+ (id)goldLikeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
