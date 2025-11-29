@class NSString, NSMutableArray, WxaInfo;

@interface GameIndexWxagInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *hightlightedTitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *playedGameList;
@property (retain, nonatomic) WxaInfo *portal;
@property (retain, nonatomic) NSString *externInfo;

+ (void)initialize;

@end
