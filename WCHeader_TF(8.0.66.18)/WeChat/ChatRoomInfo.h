@class NSString;

@interface ChatRoomInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *gotoBtn;
@property (retain, nonatomic) NSString *cancelBtn;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end
