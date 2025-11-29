@class NSArray, MMLiveLotteryGiftConfit;

@interface MMLiveLotteryGiftPacketsView : UIView

@property (retain, nonatomic) NSArray *giftViews;
@property (retain, nonatomic) NSArray *viewModels;
@property (retain, nonatomic) MMLiveLotteryGiftConfit *config;

- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithViewModels:(id)a0 config:(id)a1;
- (void)sizeToFit;
- (void)clearAll;
- (void).cxx_destruct;

@end
