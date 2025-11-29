@protocol WCFinderLiveHomePageSpecialColumnCellDelegate;

@interface WCFinderLiveHomePageSpecialColumnCell : WCFinderLiveFlowFeedGenericCell

@property (weak, nonatomic) id<WCFinderLiveHomePageSpecialColumnCellDelegate> delegate;

+ (id)cellIdentifier;

- (id)accessibilityIdentifier;
- (double)avatarImageDescLabelMargin;
- (id)customDescription;
- (double)avatarImageNickNameMargin;
- (double)descLabelRecommendReasonMargin;
- (void).cxx_destruct;

@end
