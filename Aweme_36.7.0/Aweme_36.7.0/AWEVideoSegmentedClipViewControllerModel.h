@class NSString, NSArray;

@interface AWEVideoSegmentedClipViewControllerModel : NSObject

@property (copy, nonatomic) NSString *videoPath;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *publishTitle;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *liveType;
@property (nonatomic) BOOL disableBackToTabBar;
@property (nonatomic) long long videoType;
@property (copy, nonatomic) id /* block */ backBlock;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSArray *atUserInfo;

- (void).cxx_destruct;

@end
