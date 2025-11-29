@class NSString;

@interface NotifyMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *pic;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *leftButtonWording;
@property (retain, nonatomic) NSString *rightButtonWording;

+ (void)initialize;

@end
