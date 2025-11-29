@class MMUILabel, UIView, FinderLiveNoticeInfo, WCFinderHeadImageView, UIImageView, MMUIButton, WCFinderContact;

@interface MMFinderLiveFeedNoticeColumnView : MMUIView

@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) MMUIButton *contentButton;
@property (retain, nonatomic) WCFinderHeadImageView *avatarIconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *topSeparaLine;
@property (retain, nonatomic) UIView *bottomSeparaLine;
@property (copy, nonatomic) id /* block */ contentButtonBlock;

- (void)updateWithAnchorFinderContact:(id)a0 noticeInfo:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)contentButtonClick;
- (void).cxx_destruct;

@end
