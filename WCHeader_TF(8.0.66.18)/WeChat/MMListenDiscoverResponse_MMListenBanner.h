@class NSString, NSMutableArray;

@interface MMListenDiscoverResponse_MMListenBanner : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) unsigned int beginHour;
@property (nonatomic) unsigned int endHour;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *color;
@property (nonatomic) BOOL autoCountDown;

+ (void)initialize;

@end
