@class NSMutableArray, FinderLiveContact;

@interface MMFinderLiveRecentRewardUserItem : MMLiveUserStateItem

@property (retain, nonatomic) FinderLiveContact *liveContact;
@property (retain, nonatomic) NSMutableArray *recentRewardGiftItems;
@property (nonatomic) BOOL unfold;
@property (nonatomic) double unfoldHeight;

+ (id)batchConvert:(id)a0;

- (id)initWithLiveContact:(id)a0 giftItems:(id)a1;
- (double)preCalculateHeightAtWidth:(double)a0;
- (double)preCalculateGiftsFirstLineLengthAtWidth:(double)a0;
- (id)userName;
- (void).cxx_destruct;

@end
