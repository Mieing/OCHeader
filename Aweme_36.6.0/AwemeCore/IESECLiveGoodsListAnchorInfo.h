@interface IESECLiveGoodsListAnchorInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) long long goodsIndex;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long lastIndex;
@property (nonatomic) long long beginRealIndex;
@property (nonatomic) long long endRealIndex;
@property (nonatomic) double cellOffset;
@property (nonatomic) unsigned long long indexInPage;
@property (nonatomic) double minimumLineSpacing;

@end
