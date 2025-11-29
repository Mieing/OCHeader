@class NSArray, AWESocialRelationObserver, AFDYellowNumAvatarInfoModel, AFDFrequencyCountRule, AFDFrequencyExitRule, NSString;

@interface AFDFriendsRequestManager : NSObject <AFDFriendsRequestManagerProtocol>

@property (retain, nonatomic) AFDFrequencyCountRule *showBubbleRule;
@property (retain, nonatomic) AFDFrequencyExitRule *notShowBubbleRule;
@property (nonatomic) long long friendsRequestDotCount;
@property (nonatomic) long long feedSlideUpCount;
@property (retain, nonatomic) AWESocialRelationObserver *mateStatusObserver;
@property (copy, nonatomic) NSArray *friendsRequestUIDs;
@property (nonatomic) long long onboardingTextDotModelCount;
@property (nonatomic) long long friendsRequestDotModelCount;
@property (nonatomic) long long onboardingTextDotCount;
@property (retain, nonatomic) AFDYellowNumAvatarInfoModel *yellowNumAvatarInfoModel;
@property (nonatomic) BOOL enableFeedSlideUpIndex;
@property (nonatomic) long long feedSlideUpIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFriendsTabRebrand;
+ (BOOL)badgeNumberContainsFriendsRequest;
+ (void)addFriendsTabRebrandWithParams:(id)a0;
+ (void)requestSocialCountWithFetchType:(long long)a0;
+ (id)avatarURLs;
+ (unsigned long long)friendsRequestSourceFrom;
+ (id)entryViewModel;
+ (double)entryViewTop;
+ (void)enterFriendsRequestPageWithEnterMethod:(id)a0;
+ (void)trackForMateNoticeWithActionType:(id)a0 noticeType:(id)a1;
+ (long long)bubbleShowSeconds;
+ (id)redBubbleText;
+ (unsigned long long)friendsRequestBubbleType;
+ (void)enterFriendsRequestPageWithEnterMethod:(id)a0 canLandToFindFriends:(BOOL)a1;
+ (void)updateWithFriendsRequestEntryView:(id)a0 isBlock:(BOOL)a1;
+ (id)updatedFriendsRequestEntryView;
+ (BOOL)enableFriendsRequestBubbleExpand;
+ (void)resetFeedSlideUp;
+ (void)enableFeedSlideUp;
+ (id)textWithCount:(long long)a0;
+ (void)animateDimssFriendsRequestEntryView:(id)a0;
+ (id)bubbleText;

- (void)clearFriendsRequestAllData;
- (void)setFriendsRequestDotCount:(long long)a0 params:(id)a1;
- (BOOL)shouldShowBubbleWithIsColdLaunch:(BOOL)a0;
- (void)clearFeedSlideUpCount;
- (void)setHasShownFriendsRequestBubble;
- (void)showBubbleRuleAddCount;
- (void)notShowBubbleRuleAddCount;
- (void)notShowBubbleRuleReset;
- (BOOL)hasShownFriendsRequestBubble;
- (BOOL)shouldShowBubbleByShowRule;
- (BOOL)shouldShowBubbleByNotShowRule;
- (long long)showBubbleRuleSeconds;
- (long long)notShowBubbleRuleNeededCount;
- (long long)notShowBubbleRuleSeconds;
- (void)addFeedSlideUpCount;
- (void).cxx_destruct;
- (id)init;

@end
