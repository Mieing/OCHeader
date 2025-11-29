@class ConcertTicketInfo, MMFinderLivePayButton, MMWebImageView, MMUILabel;
@protocol MMLiveBuyTicketsViewDelegate;

@interface MMLiveBuyTicketsView : UIView

@property (retain, nonatomic) ConcertTicketInfo *ticketInfo;
@property (nonatomic) unsigned int remainTime;
@property (nonatomic) unsigned int limitTime;
@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMFinderLivePayButton *actionButton;
@property (nonatomic) long long payButtonState;
@property (nonatomic) BOOL isLandscapeLayout;
@property (nonatomic) BOOL needSmallImage;
@property (copy, nonatomic) id /* block */ payTicketBlock;
@property (weak, nonatomic) id<MMLiveBuyTicketsViewDelegate> delegate;

- (void)adaptLandscapeLayout:(BOOL)a0 needSmallImage:(BOOL)a1;
- (void)updateActionButtonOrientation;
- (double)getCurrentWidth;
- (double)getDefaultWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)getTitleLabelWidth;
- (void)layoutSubviews;
- (void)updateConcertTicketInfo:(id)a0 limitTime:(unsigned int)a1 remainTime:(unsigned int)a2;
- (void)updateRetryViewTip;
- (void)startCountDown;
- (void)countDown;
- (void)updateForRemainTimeChanged;
- (void)layoutUI;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutdetailLabel;
- (void)layoutActionBtn;
- (void)onPayActionTimeout;
- (double)getMainHeight;
- (double)ticketActionButtonWidth;
- (double)ticketActionButtonTop;
- (void)actionButtonClick;
- (void).cxx_destruct;

@end
