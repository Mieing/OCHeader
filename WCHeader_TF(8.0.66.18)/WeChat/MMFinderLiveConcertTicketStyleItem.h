@class UIColor, NSString, NSArray, MMFinderLiveConcertTicketWebPageShareInfo, NSDate, MMFinderLiveConcertTicketExternalNavigationInfo;

@interface MMFinderLiveConcertTicketStyleItem : NSObject

@property (retain, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSString *transientStyleId;
@property (retain, nonatomic) NSString *pageBackgroundImageUri;
@property (nonatomic) BOOL usePageBackgroundBlurEffect;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSString *anchorNicknameLine;
@property (nonatomic) unsigned long long ticketId;
@property (retain, nonatomic) NSString *ticketBackgroundImageUri;
@property (retain, nonatomic) NSString *miniatureTicketBackgroundImageUri;
@property (retain, nonatomic) NSString *brandLogoImageUri;
@property (retain, nonatomic) NSString *qrCodeImageUri;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *ticketIdColor;
@property (retain, nonatomic) UIColor *primaryButtonTopLeftColor;
@property (retain, nonatomic) UIColor *primaryButtonBottomRightColor;
@property (retain, nonatomic) UIColor *primaryButtonForegroundColor;
@property (retain, nonatomic) UIColor *bottomButtonsForegroundColor;
@property (retain, nonatomic) UIColor *bottomSeparatorsForegroundColor;
@property (retain, nonatomic) NSString *nextQuoteButtonText;
@property (retain, nonatomic) UIColor *nextQuoteButtonBackgroundColor;
@property (retain, nonatomic) UIColor *nextQuoteButtonForegroundColor;
@property (retain, nonatomic) NSArray *quotes;
@property (retain, nonatomic) NSString *ticketHolderAvatarImageUri;
@property (retain, nonatomic) NSString *ticketHolderNickname;
@property (nonatomic) BOOL isPaid;
@property (nonatomic) unsigned int pricing;
@property (retain, nonatomic) MMFinderLiveConcertTicketExternalNavigationInfo *externalNavigationInfo;
@property (retain, nonatomic) NSArray *pageItems;
@property (retain, nonatomic) MMFinderLiveConcertTicketWebPageShareInfo *webPageShareInfo;

+ (id)styleItemWithTicketInfo:(id)a0 resourceInfo:(id)a1;

- (void).cxx_destruct;

@end
