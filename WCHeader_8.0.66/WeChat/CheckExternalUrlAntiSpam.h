@class NSString, NSMutableArray;

@interface CheckExternalUrlAntiSpam : WXPBGeneratedMessage

@property (nonatomic) unsigned int antispamCode;
@property (nonatomic) unsigned int antispamType;
@property (retain, nonatomic) NSString *antispamTitle;
@property (retain, nonatomic) NSString *antispamContent;
@property (retain, nonatomic) NSMutableArray *antispamButton;

+ (void)initialize;

@end
