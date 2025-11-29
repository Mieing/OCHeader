@class NSString;

@interface WCStoryStatusReportObj : NSObject

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long videoType;
@property (nonatomic) unsigned long long previewEnterScene;

+ (void)reportChangeFeaturedWithTid:(id)a0;

- (void)reportChangeFeaturedOrHiddenStatus;
- (void).cxx_destruct;

@end
