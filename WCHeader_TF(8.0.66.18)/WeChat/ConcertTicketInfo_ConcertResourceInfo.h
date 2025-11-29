@class NSString, NSMutableArray, ConcertTicketInfo_WordResource;

@interface ConcertTicketInfo_ConcertResourceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *ticketPictureUrl;
@property (retain, nonatomic) NSString *ticketBgPictureUrl;
@property (retain, nonatomic) NSString *ticketSmallPictureUrl;
@property (retain, nonatomic) NSMutableArray *textColorValue;
@property (retain, nonatomic) NSMutableArray *ticketNumberColorValue;
@property (retain, nonatomic) NSMutableArray *buttonColorValue;
@property (retain, nonatomic) NSString *qrCodeUrl;
@property (retain, nonatomic) NSString *logoPictureUrl;
@property (nonatomic) BOOL enableBackgroundGlasses;
@property (retain, nonatomic) ConcertTicketInfo_WordResource *wordResource;
@property (retain, nonatomic) NSMutableArray *shareColorValue;
@property (retain, nonatomic) NSMutableArray *bottomTextColorValue;
@property (retain, nonatomic) NSMutableArray *bottomSplitLineColorValue;
@property (retain, nonatomic) NSString *ticketPictureBottomBoxBgUrl;
@property (retain, nonatomic) NSString *ticketPictureBottomBoxWording;
@property (retain, nonatomic) NSString *ticketPictureBottomBoxWordingColorValue;
@property (retain, nonatomic) NSString *ticketPictureBottomBoxIconUrl;

+ (void)initialize;

@end
