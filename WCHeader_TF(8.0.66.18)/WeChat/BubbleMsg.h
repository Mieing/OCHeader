@class NSString;

@interface BubbleMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *sourceIconUrl;
@property (retain, nonatomic) NSString *sourceDisplayName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *weappUsername;
@property (retain, nonatomic) NSString *weappPath;

+ (void)initialize;

@end
