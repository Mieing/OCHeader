@class NSString;

@interface MenuEntryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *entryUrl;
@property (retain, nonatomic) NSString *entryText;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL disableOptionBtn;

+ (void)initialize;

@end
