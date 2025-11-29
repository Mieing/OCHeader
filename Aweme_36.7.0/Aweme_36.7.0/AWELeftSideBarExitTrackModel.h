@class NSString, NSDictionary;

@interface AWELeftSideBarExitTrackModel : NSObject

@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *entranceStatus;
@property (nonatomic) double duration;
@property (nonatomic) double panelDuration;
@property (nonatomic) BOOL isSlide;
@property (nonatomic) BOOL isClick;
@property (copy, nonatomic) NSDictionary *badgeExtra;
@property (nonatomic) long long entryLastBadgeTime;
@property (copy, nonatomic) NSDictionary *reopenTrackParams;

- (void).cxx_destruct;

@end
