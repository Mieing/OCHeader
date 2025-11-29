@class UIImageView, MMUIView, FinderLiveNoticeInfo, MMUILabel;

@interface WCFinderLiveBindingNoticeMainView : UIView

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) MMUIView *topLineView;
@property (retain, nonatomic) MMUIView *bottomLineView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *reserveLabel;

+ (id)getReserveString:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateData:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void).cxx_destruct;

@end
