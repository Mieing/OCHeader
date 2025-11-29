@class WCFinderPurchasedItem, WCFinderFeedImageCDNView, WCFinderHeadImageView, MMUIView, WCFinderAuthInfoIconView, WCFinderDataItem, MMUILabel;

@interface MMFinderLivePurchasedFeedCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) MMUIView *bubbleContentView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *coverImageView;
@property (retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView;
@property (retain, nonatomic) MMUILabel *anchorNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMUILabel *contentDescLabel;
@property (retain, nonatomic) MMUILabel *createTimeLabel;
@property (retain, nonatomic) MMUILabel *statusLabel;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderPurchasedItem *purchasedItem;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initViews;
- (void)updateWithPurchasedItem:(id)a0;
- (void)updateWithECObject:(id)a0;
- (void)clearCoverImage;
- (void)updateWithDataItem:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)willAppear;
- (void).cxx_destruct;

@end
