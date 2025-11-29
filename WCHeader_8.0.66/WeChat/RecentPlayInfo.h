@class RecentPlayInfo_RecentPlayMore, NSString, RecentPlayInfo_LaunchPrivilege, NSMutableArray;

@interface RecentPlayInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *moduleTitle;
@property (retain, nonatomic) RecentPlayInfo_LaunchPrivilege *launch;
@property (retain, nonatomic) NSMutableArray *infoList;
@property (retain, nonatomic) RecentPlayInfo_RecentPlayMore *more;

+ (void)initialize;

@end
