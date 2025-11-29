@class NSString;

@interface PoiTakeAway : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) int takeAwayable;
@property (retain, nonatomic) NSString *longTag;
@property (retain, nonatomic) NSString *tag;

+ (void)initialize;

@end
