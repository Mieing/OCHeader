@class MMUILabel, NSArray, UIImageView, UILabel, UIView, MMUIButton;
@protocol MMFinderLiveConcertTicketViewDelegate;

@interface MMFinderLiveConcertTicketView : UIView

@property (retain, nonatomic) UIView *ticketRoundedCornerContainerView;
@property (retain, nonatomic) UIView *ticketContainerView;
@property (retain, nonatomic) UIView *nonImagedContainerView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *brandLogoView;
@property (retain, nonatomic) UIView *ticketIdContainer;
@property (retain, nonatomic) UILabel *ticketIdLabel;
@property (retain, nonatomic) UIImageView *quotationMarkImageView;
@property (retain, nonatomic) MMUIButton *nextLyricsButton;
@property (retain, nonatomic) MMUILabel *lyricsQuotationLabel;
@property (retain, nonatomic) UILabel *concertNameLabel;
@property (retain, nonatomic) UIImageView *weBeanLogoView;
@property (retain, nonatomic) UILabel *weBeanPriceLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIView *separatorBarView;
@property (retain, nonatomic) UIImageView *holderAvatarView;
@property (retain, nonatomic) UILabel *holderLabel;
@property (retain, nonatomic) UIView *qrCodeContainerView;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) NSArray *lyrics;
@property (nonatomic) unsigned long long currentLyricsIndex;
@property (retain, nonatomic) UIView *externalNavigationBar;
@property (retain, nonatomic) UIImageView *externalNavigationBarBackgroundImageView;
@property (retain, nonatomic) UIImageView *externalNavigationBarIconView;
@property (retain, nonatomic) MMUIButton *externalNavigationButton;
@property (retain, nonatomic) UIImageView *externalNavigationBarRightChevronView;
@property (weak, nonatomic) id<MMFinderLiveConcertTicketViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithTicketStyleItem:(id)a0;
- (void)playEntryAnimation;
- (id)ticketImage;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)nextLyricsQuotation;
- (void)onExternalNavigationInvoked;
- (void)startAsyncImageLoadWithStyleItem:(id)a0;
- (void)setImageUri:(id)a0 forImageView:(id)a1 fallbackImage:(id)a2 isRequired:(BOOL)a3 isCritical:(BOOL)a4 criticalFailBlock:(id /* block */)a5 taskGroup:(id)a6 logKey:(id)a7;
- (void)setLabelColor:(id)a0;
- (void).cxx_destruct;

@end
