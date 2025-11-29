@class MMUILabel, GetProfileInfoResponse_ProfilePageInfo, UIImageView, MMWebImageView, MMUIButton, UIView;
@protocol IWARichTextViewHelper;

@interface WAMenuAboveHeaderView : UIButton

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) MMWebImageView *headerIconView;
@property (retain, nonatomic) id<IWARichTextViewHelper> headerRichTextHelper;
@property (retain, nonatomic) MMUIButton *headerRightButton;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) GetProfileInfoResponse_ProfilePageInfo *pageInfo;

- (void)config:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;

@end
