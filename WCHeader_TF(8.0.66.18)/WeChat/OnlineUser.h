@class NSString, Color, TextInfo, NSMutableArray;

@interface OnlineUser : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *chatUserData;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *statusIcon;
@property (retain, nonatomic) Color *iconColor;
@property (retain, nonatomic) NSString *statusDesc;
@property (retain, nonatomic) TextInfo *textDesc;
@property (nonatomic) BOOL needFold;
@property (retain, nonatomic) NSString *leftIcon;

+ (void)initialize;

@end
