@class FinderLiveGift;

@interface MMFinderLiveRecentRewardGiftItem : NSObject

@property (retain, nonatomic) FinderLiveGift *gift;
@property (nonatomic) unsigned int productCount;
@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) double lengthAtLast;

+ (id)batchConvert:(id)a0;

- (id)initWithFinderLiveGift:(id)a0 count:(unsigned int)a1;
- (void).cxx_destruct;

@end
