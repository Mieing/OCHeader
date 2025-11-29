@class UIView, AWENotificationModelNew, UIImageView, UILabel, NSAttributedString, YYLabel;
@protocol AWETeenMessageContentCardViewDelegate;

@interface AWETeenMessageContentCardView : UIView

@property (retain, nonatomic) AWENotificationModelNew *model;
@property (retain, nonatomic) NSAttributedString *foldTruncationToken;
@property (retain, nonatomic) YYLabel *hightToken;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIView *unreadDotView;
@property (weak, nonatomic) id<AWETeenMessageContentCardViewDelegate> delegate;

- (void)configWithModel:(id)a0;
- (double)p_calculateYYlabelWidth;
- (void)p_makeUnfoldedCellContrain;
- (void)p_makeFoldedCellConstrain;
- (void)addConstrains;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
