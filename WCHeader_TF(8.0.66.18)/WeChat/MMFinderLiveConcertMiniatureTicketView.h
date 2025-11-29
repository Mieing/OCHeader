@class NSString, UIImageView, MMFinderLiveConcertMiniatureTicketViewReportContext, UILabel, MMUIButton, UIView;

@interface MMFinderLiveConcertMiniatureTicketView : UIView <MMFinderLiveConcertMiniTicketViewBase>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *concertNameLabel;
@property (retain, nonatomic) MMUIButton *getTicketButton;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) MMFinderLiveConcertMiniatureTicketViewReportContext *reportContext;
@property (copy, nonatomic) id /* block */ readyForDisplayBlock;
@property (copy, nonatomic) id /* block */ getTicketButtonTappedBlock;
@property (copy, nonatomic) id /* block */ closeButtonTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithTicketModel:(id)a0 reportContext:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onGetTicketButtonTapped;
- (void)onCloseButtonTapped;
- (void)checkImageLoadCompletion;
- (void).cxx_destruct;

@end
