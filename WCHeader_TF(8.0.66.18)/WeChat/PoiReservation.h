@class NSString;

@interface PoiReservation : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) int bookable;

+ (void)initialize;

@end
