@class NSString, WCPayAntiCheatWarningTextInfo;

@interface WCPayWarningNotice : NSObject

@property (nonatomic) unsigned int is_show_notice;
@property (retain, nonatomic) WCPayAntiCheatWarningTextInfo *text_info;
@property (retain, nonatomic) NSString *text_color;
@property (retain, nonatomic) NSString *text_dark_color;
@property (retain, nonatomic) NSString *lefticon;
@property (retain, nonatomic) NSString *lefticon_dark;
@property (retain, nonatomic) NSString *righticon;
@property (retain, nonatomic) NSString *righticon_dark;

- (void).cxx_destruct;

@end
