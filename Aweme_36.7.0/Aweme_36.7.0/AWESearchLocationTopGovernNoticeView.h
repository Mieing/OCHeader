@class UIImageView, UILabel, UIView;
@protocol AWESearchLocationTopGovernNoticeViewDelegate;

@interface AWESearchLocationTopGovernNoticeView : UIView

@property (retain, nonatomic) UIImageView *noticeIcon;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UILabel *noticeTitle;
@property (retain, nonatomic) UILabel *noticeContent;
@property (retain, nonatomic) UIImageView *gotoDetailIcon;
@property (weak, nonatomic) id<AWESearchLocationTopGovernNoticeViewDelegate> delegate;

- (void)refreshWithModel:(id)a0;
- (id)initWithModel:(id)a0 delegate:(id)a1;
- (void)gotoDetail;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
