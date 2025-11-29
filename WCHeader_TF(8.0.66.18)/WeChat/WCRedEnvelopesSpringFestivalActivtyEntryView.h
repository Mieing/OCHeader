@class WCPayWebImageView, WCRedEnvelopesSpringFestivalActivtyEntryInfo, UIImageView, UILabel;
@protocol WCRedEnvelopesSpringFestivalActivtyEntryViewDelegate;

@interface WCRedEnvelopesSpringFestivalActivtyEntryView : UIView

@property (retain, nonatomic) WCPayWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCRedEnvelopesSpringFestivalActivtyEntryInfo *viewModel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCRedEnvelopesSpringFestivalActivtyEntryViewDelegate> m_delegate;

- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapActivityEntry:(id)a0;
- (void)onLongActivityEntry:(id)a0;
- (void).cxx_destruct;

@end
