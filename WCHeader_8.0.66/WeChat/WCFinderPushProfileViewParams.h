@class NSString, NSDictionary;

@interface WCFinderPushProfileViewParams : NSObject

@property (copy, nonatomic) NSString *lastSeenTid;
@property (nonatomic) int reportCommentScene;
@property (nonatomic) int enterType;
@property (retain, nonatomic) NSString *redPacketLinkUrl;
@property (retain, nonatomic) NSString *redPacketCoverId;
@property (nonatomic) long long redPacketJumpFrom;
@property (nonatomic) int selectedTab;
@property (copy, nonatomic) NSDictionary *businessByPass;

- (id)init;
- (void).cxx_destruct;

@end
