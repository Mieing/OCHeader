@class NSArray, NSDictionary, MMFinderLiveConnectMicPKInfo, MMFinderLiveConnectMicUser;

@interface MMFinderLiveConnectMicPkPanelModel : NSObject

@property (retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo;
@property (retain, nonatomic) NSArray *connectAnchorUserList;
@property (retain, nonatomic) NSArray *connectAudienceUserList;
@property (retain, nonatomic) NSArray *applyAudienceUserList;
@property (retain, nonatomic) NSArray *waitConnectAudienceList;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *selfMicUser;
@property (retain, nonatomic) NSDictionary *invitedMicAudienceDict;
@property (retain, nonatomic) NSArray *otherRoomConnectAudienceUserList;
@property (nonatomic) BOOL isAnchorPkChangeLayoutEnabled;

- (void).cxx_destruct;

@end
