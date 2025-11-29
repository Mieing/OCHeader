@class NSString, NSMutableArray, Color;

@interface BroadcastMessage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSMutableArray *usernameList;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) Color *color;
@property (nonatomic) unsigned int disappearSecond;

+ (void)initialize;

@end
