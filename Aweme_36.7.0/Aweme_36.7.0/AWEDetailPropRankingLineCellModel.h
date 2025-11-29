@class NSString, AWECodeGenStickerRankingItemModel;

@interface AWEDetailPropRankingLineCellModel : NSObject

@property (retain, nonatomic) AWECodeGenStickerRankingItemModel *rankingItem;
@property (copy, nonatomic) NSString *scorePrefix;
@property (copy, nonatomic) NSString *scoreSuffix;
@property (nonatomic) BOOL isCheckInEffect;
@property (nonatomic) BOOL isSelf;
@property (nonatomic) long long maxIndex;

- (void).cxx_destruct;
- (id)init;

@end
