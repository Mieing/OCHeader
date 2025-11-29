@class NSString;

@interface HVGameGetMenuResponse_Menu : WXPBGeneratedMessage

@property (nonatomic) unsigned int itemId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *targetUrl;
@property (nonatomic) unsigned int placeId;

+ (void)initialize;

@end
