@class NSString, NSDictionary, AWEHPChannelBadgeCallContext;

@interface AWESideBarEntranceBadgeInfo : NSObject

@property (nonatomic) long long badgeStyle;
@property (nonatomic) long long badgeNumber;
@property (nonatomic) BOOL isForbiddenByLottie;
@property (copy, nonatomic) NSString *recentDisplayBadgeComponentID;
@property (retain, nonatomic) AWEHPChannelBadgeCallContext *recentDisplayBadgeContext;
@property (copy, nonatomic) NSDictionary *bizTrackParams;

- (void).cxx_destruct;
- (id)description;

@end
