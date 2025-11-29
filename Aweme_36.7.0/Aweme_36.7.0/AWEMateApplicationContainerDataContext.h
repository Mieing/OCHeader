@class NSString, NSMutableSet;

@interface AWEMateApplicationContainerDataContext : NSObject

@property (nonatomic) BOOL showRecommendList;
@property (nonatomic) BOOL hasRecommendList;
@property (nonatomic) BOOL hasUnfoldNoticeList;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSMutableSet *shownMateApplications;

- (void).cxx_destruct;

@end
