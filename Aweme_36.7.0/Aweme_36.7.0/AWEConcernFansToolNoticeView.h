@class NSString, UIImageView, AWEAwemeModel, UIView, UILabel, AWEButton;
@protocol AWEConcernNoticeDelegate;

@interface AWEConcernFansToolNoticeView : UIView <AWEConcernNoticeViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEButton *heatButton;
@property (weak, nonatomic) id<AWEConcernNoticeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAwemeModel:(id)a0;
- (void)__setupUI;
- (void)configNoticeViewWithModel:(id)a0;
- (id)__createShadowView;
- (id)__createIndicatorView;
- (void)trackWithWindowShow;
- (void).cxx_destruct;

@end
