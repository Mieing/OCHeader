@class NSString, RedirectUrl;

@interface JumpRemind : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpType;
@property (nonatomic) BOOL isPopUpWindows;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *leftButtonWording;
@property (retain, nonatomic) NSString *rightButtonWording;
@property (retain, nonatomic) RedirectUrl *url;
@property (retain, nonatomic) NSString *title;

+ (void)initialize;

@end
