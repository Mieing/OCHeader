@class NSString;

@interface MenuItemV2 : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *waappUsername;
@property (retain, nonatomic) NSString *waappPath;
@property (retain, nonatomic) NSString *subwording;
@property (nonatomic) unsigned int isShowRed;

+ (void)initialize;

@end
