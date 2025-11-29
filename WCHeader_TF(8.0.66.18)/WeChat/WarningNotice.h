@class WarningTextInfo, NSString;

@interface WarningNotice : WXPBGeneratedMessage

@property (nonatomic) unsigned int isShowNotice;
@property (retain, nonatomic) WarningTextInfo *textInfo;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *textDarkColor;
@property (retain, nonatomic) NSString *lefticon;
@property (retain, nonatomic) NSString *lefticonDark;
@property (retain, nonatomic) NSString *righticon;
@property (retain, nonatomic) NSString *righticonDark;

+ (void)initialize;

@end
