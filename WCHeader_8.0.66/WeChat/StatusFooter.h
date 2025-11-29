@class NSString, NSMutableArray;

@interface StatusFooter : WXPBGeneratedMessage

@property (nonatomic) unsigned int uin;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *sourceActivityId;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceIcon;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSMutableArray *jumps;

+ (void)initialize;

@end
