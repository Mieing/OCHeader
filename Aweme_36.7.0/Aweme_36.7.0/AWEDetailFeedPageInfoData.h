@class NSString, NSDictionary, UIView, AWEAwemeDetailTableViewController, AWEAwemeDetailContainerConfig;

@interface AWEDetailFeedPageInfoData : NSObject

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) UIView *rootView;
@property (copy, nonatomic) NSString *rootClassName;
@property (weak, nonatomic) AWEAwemeDetailTableViewController *tmp_containerVC;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) AWEAwemeDetailContainerConfig *config;

- (void).cxx_destruct;

@end
