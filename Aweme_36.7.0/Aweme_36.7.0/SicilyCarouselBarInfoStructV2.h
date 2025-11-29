@class NSString, MainContentStructV2, HeadIconStructV2;

@interface SicilyCarouselBarInfoStructV2 : GPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (retain, nonatomic) MainContentStructV2 *mainContent;
@property (nonatomic) BOOL hasMainContent;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (copy, nonatomic) NSString *tracerInfo;
@property (nonatomic) BOOL hasTracerInfo;
@property (retain, nonatomic) HeadIconStructV2 *icon;
@property (nonatomic) BOOL hasIcon;

+ (id)descriptor;

@end
