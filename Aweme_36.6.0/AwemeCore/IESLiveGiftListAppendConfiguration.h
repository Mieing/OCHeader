@class NSNumber, NSArray, GiftPage;

@interface IESLiveGiftListAppendConfiguration : NSObject

@property (retain, nonatomic) NSNumber *pageType;
@property (retain, nonatomic) GiftPage *giftPage;
@property (retain, nonatomic) NSArray *giftModels;
@property (retain, nonatomic) NSArray *requestGiftIds;

- (id)initWithPageType:(id)a0 giftPage:(id)a1 giftModels:(id)a2 requestGiftIds:(id)a3;
- (void).cxx_destruct;

@end
