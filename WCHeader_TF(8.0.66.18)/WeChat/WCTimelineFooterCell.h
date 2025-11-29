@class WCMomentsPostShareButton, WCTimelineFooterViewModel, WCMicroMerchantMoreView, UIView;
@protocol WCTimelineFooterCellDelegate;

@interface WCTimelineFooterCell : MMTableViewCell

@property (retain, nonatomic) UIView *topSeperatorLine;
@property (retain, nonatomic) UIView *bottomSeperatorLine;
@property (retain, nonatomic) WCMicroMerchantMoreView *microMerchantMoreView;
@property (retain, nonatomic) WCMomentsPostShareButton *postShareButton;
@property (retain, nonatomic) WCTimelineFooterViewModel *viewModel;
@property (weak, nonatomic) id<WCTimelineFooterCellDelegate> delegate;

+ (id)defaultIdentifier;
+ (double)separatorHeight;
+ (double)defaultHeight;
+ (double)heightForViewModel:(id)a0 inTableView:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)microMerchantMoreViewClicked:(id)a0;
- (void)postShareButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
