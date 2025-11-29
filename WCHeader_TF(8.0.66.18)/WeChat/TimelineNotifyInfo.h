@class NSString, NSMutableArray;

@interface TimelineNotifyInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *notifyList;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int shouldCleanup;
@property (retain, nonatomic) NSString *entryTitle;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) int version;

+ (void)initialize;

@end
