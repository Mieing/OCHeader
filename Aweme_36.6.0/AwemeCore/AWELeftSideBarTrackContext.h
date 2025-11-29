@class NSString, NSDictionary;

@interface AWELeftSideBarTrackContext : NSObject <AWELeftSideBarTrackContextProtocol>

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *entranceStatus;
@property (copy, nonatomic) NSString *homepageHotScene;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long openTimeStamp;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *schemaId;
@property (copy, nonatomic) NSString *captionBubbleComponentId;
@property (nonatomic) long long lastLottieTime;
@property (nonatomic) long long lastAnimateTime;
@property (nonatomic) long long lastBadgeTime;
@property (nonatomic) long long entryLastBadgeTime;
@property (copy, nonatomic) NSString *entryBadgeComponentID;
@property (copy, nonatomic) NSDictionary *bizTrackParams;
@property (copy, nonatomic) NSDictionary *exitBadgeTrackParams;
@property (copy, nonatomic) NSDictionary *reopenTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
