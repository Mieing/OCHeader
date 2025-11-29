@class UIButton, UITapGestureRecognizer, NSDictionary, AWEAwemeModel, UILabel, UIView, YYLabel;

@interface AWESearchLivePayOverlayView : UIView

@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *buyButton;
@property (retain, nonatomic) UIView *titleContainer;
@property (nonatomic) long long payStatus;
@property (nonatomic) BOOL hasShareTickets;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double titleLineHeight;
@property (nonatomic) double subTitleFontSize;
@property (nonatomic) double subTitleLineHeight;

- (void)p_setupUI;
- (void)updateExtraWithModel:(id)a0 extraParams:(id)a1;
- (void)updateWithFinishViewType:(long long)a0 hasShareTickets:(BOOL)a1;
- (id)initWithTitleFontSize:(double)a0 titleLineHeight:(double)a1 subTitleFontSize:(double)a2 subTitleLineHeight:(double)a3;
- (void)payButtonClick;
- (void)genTitleUnVerifiedText;
- (void)trackButtonClick;
- (void)openPayForTicketPanelWithHasShareTickets:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
