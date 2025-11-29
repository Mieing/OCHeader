@class UIView, AWENotificationModelNew, AWEOfficialContentLabel, UIImageView, UILabel, AWEIMDYOfficialDisableStateView, YYLabel;
@protocol AWEIMDYOfficialContentCardViewDelegate;

@interface AWEIMDYOfficialContentCardView : UIView

@property (retain, nonatomic) AWENotificationModelNew *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMDYOfficialDisableStateView *unsubscribeView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) YYLabel *numberLabel;
@property (retain, nonatomic) AWEOfficialContentLabel *contentLabel;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIView *unreadDotView;
@property (weak, nonatomic) id<AWEIMDYOfficialContentCardViewDelegate> delegate;
@property (nonatomic) BOOL shouldShowUnsubscribeView;

- (double)p_calculateYYlabelWidth;
- (void)p_makeUnfoldedCellContrain;
- (void)p_makeFoldedCellConstrain;
- (void)addConstrains;
- (void)__addSubViews;
- (void)configWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
