@class UIImageView, UILabel;

@interface MMFinderLiveNoticeCouponsGuideViewHeader : UIView

@property (retain, nonatomic) UIImageView *doneView;
@property (retain, nonatomic) UILabel *reservedLabel;
@property (retain, nonatomic) UILabel *willNoticeLabel;
@property (retain, nonatomic) UILabel *canReceiveLabel;

- (id)initWithNotices:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
