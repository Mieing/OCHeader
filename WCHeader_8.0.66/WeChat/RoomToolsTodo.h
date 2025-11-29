@class NSString, NSData;

@interface RoomToolsTodo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *todoId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int time;
@property (retain, nonatomic) NSData *customInfo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *creator;
@property (nonatomic) unsigned long long relatedMsgId;
@property (retain, nonatomic) NSString *manager;

+ (void)initialize;

@end
