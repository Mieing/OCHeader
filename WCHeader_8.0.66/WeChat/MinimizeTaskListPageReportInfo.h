@class NSString, NSArray;

@interface MinimizeTaskListPageReportInfo : NSObject

@property (retain, nonatomic) NSString *aggreSessionId;
@property (nonatomic) unsigned long long enterPageTime;
@property (nonatomic) unsigned long long exitPageTime;
@property (nonatomic) unsigned long long exitPageType;
@property (nonatomic) unsigned long long taskCount;
@property (nonatomic) int state;
@property (retain, nonatomic) NSArray *miniSessionIdList;

- (void).cxx_destruct;

@end
