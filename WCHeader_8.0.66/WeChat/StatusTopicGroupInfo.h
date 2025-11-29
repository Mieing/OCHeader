@class NSString, NSMutableArray;

@interface StatusTopicGroupInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *statusInfoList;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) int iconColor;

+ (void)initialize;

@end
