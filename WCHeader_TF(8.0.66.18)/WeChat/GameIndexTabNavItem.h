@class NSString;

@interface GameIndexTabNavItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *navKey;
@property (retain, nonatomic) NSString *jumpUrl;
@property (nonatomic) BOOL isEntryPage;
@property (nonatomic) BOOL isNativePage;
@property (retain, nonatomic) NSString *iconNormalUrl;
@property (retain, nonatomic) NSString *iconSelectedUrl;
@property (nonatomic) unsigned int uiarea;
@property (nonatomic) unsigned int positionId;
@property (retain, nonatomic) NSString *externInfo;

+ (void)initialize;

@end
