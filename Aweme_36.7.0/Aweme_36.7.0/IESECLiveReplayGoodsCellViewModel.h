@class IESECLiveReplayGoodsListContext, IESECLiveGoodsViewModel;

@interface IESECLiveReplayGoodsCellViewModel : IESECLiveBaseListCellViewModel <NSCopying>

@property (weak, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) IESECLiveGoodsViewModel *goodsViewModel;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
