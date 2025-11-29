@protocol WCFinderLiveHomePageNormalCellDelegate;

@interface WCFinderLiveHomePageNormalCell : WCFinderLiveFlowFeedGenericCell

@property (weak, nonatomic) id<WCFinderLiveHomePageNormalCellDelegate> delegate;

+ (id)cellIdentifier;

- (id)accessibilityIdentifier;
- (void).cxx_destruct;

@end
