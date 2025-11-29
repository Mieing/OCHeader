@class NSError, NSString, NSDictionary;

@interface AWEUserTrackMonitorConfig : NSObject

@property (retain, nonatomic) NSError *tabError;
@property (retain, nonatomic) NSError *headerError;
@property (copy, nonatomic) NSString *currentPage;
@property (copy, nonatomic) NSString *tabLogName;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSelf;
@property (copy, nonatomic) NSDictionary *ext;
@property (nonatomic) BOOL refresh;

- (void).cxx_destruct;

@end
