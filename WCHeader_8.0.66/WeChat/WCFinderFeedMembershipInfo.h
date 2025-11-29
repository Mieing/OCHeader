@interface WCFinderFeedMembershipInfo : NSObject

@property (nonatomic) BOOL isMemberShipFeed;
@property (nonatomic) BOOL canPreview;
@property (nonatomic) BOOL canPlay;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long visitorStatus;

- (BOOL)inMemberGuildMode;
- (BOOL)_isInFinderTimeline:(int)a0;
- (id)description;

@end
