@class NSString, NSMutableArray;

@interface VideoChannelTimelineInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int shouldCleanup;
@property (retain, nonatomic) NSString *entryTitle;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) int version;

+ (void)initialize;

@end
