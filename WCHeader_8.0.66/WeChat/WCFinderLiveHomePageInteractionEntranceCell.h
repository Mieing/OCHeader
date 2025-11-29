@class NSString, UIImageView, WCFinderLiveGenericFeedVM, UILabel, UIView;

@interface WCFinderLiveHomePageInteractionEntranceCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveGenericFeedVMDelegate, WCFinderLiveFeedGenericCardCellProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initializeIfNeeded:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithFeedVM:(id)a0;
- (void)reloadData;
- (id)accessibilityLabel;
- (void)onFeedLiveInteractionCardContentUpdate;
- (void).cxx_destruct;

@end
