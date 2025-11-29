@class NSString;

@interface AAAlertItem : WXPBGeneratedMessage

@property (nonatomic) int flag;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *leftButtonWording;
@property (retain, nonatomic) NSString *rightButtonWording;
@property (retain, nonatomic) NSString *rightButtonUrl;

+ (void)initialize;

@end
