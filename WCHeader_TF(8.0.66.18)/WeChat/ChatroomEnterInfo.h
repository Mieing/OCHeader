@class NSString, UserEnterOption, BackgroundInfo, NSMutableArray;

@interface ChatroomEnterInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *contentList;
@property (retain, nonatomic) UserEnterOption *userEnterOption;
@property (retain, nonatomic) NSString *buttomDesc;
@property (retain, nonatomic) BackgroundInfo *backgroundInfo;
@property (retain, nonatomic) NSString *reportStr;

+ (void)initialize;

@end
