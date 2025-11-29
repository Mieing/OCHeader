@class NSArray, IESECLiveReplayGoodsListHeader, NSNumber;

@interface IESECLiveReplayGoodsListModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSArray *goodsList;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeader *header;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSNumber *nextOffset;
@property (retain, nonatomic) NSNumber *serverTime;

+ (id)goodsListJSONTransformer;
+ (id)headerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
