@class NSString, NSNumber, NSMutableDictionary;

@interface AWERecommendTrackContext : NSObject

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromTab;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *secondPreviousPage;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *recommendUserType;
@property (copy, nonatomic) NSString *repostFromItemID;
@property (copy, nonatomic) NSString *pushID;
@property (copy, nonatomic) NSString *gdLabel;
@property (copy, nonatomic) NSString *currentUserID;
@property (copy, nonatomic) NSString *toUserID;
@property (copy, nonatomic) NSString *logPb;
@property (copy, nonatomic) NSString *watchType;
@property (copy, nonatomic) NSString *coplayOperateUser;
@property (copy, nonatomic) NSString *coplayUserType;
@property (copy, nonatomic) NSString *coplayBelongUserType;
@property (copy, nonatomic) NSString *playRemoteRoomID;
@property (copy, nonatomic) NSString *playRemoteAnchorID;
@property (copy, nonatomic) NSString *playRemotePrivacyStatus;
@property (copy, nonatomic) NSString *followType;
@property (copy, nonatomic) NSString *itemSource;
@property (retain, nonatomic) NSNumber *imprOrder;
@property (retain, nonatomic) NSNumber *subOrder;
@property (retain, nonatomic) NSNumber *feedOrder;
@property (retain, nonatomic) NSNumber *isHighlight;
@property (retain, nonatomic) NSNumber *isBigFollowButton;
@property (retain, nonatomic) NSNumber *isRedFollowButton;
@property (retain, nonatomic) NSNumber *isNextCard;
@property (retain, nonatomic) NSNumber *recommendSystemGroupID;
@property (nonatomic) long long bigCardImpr;
@property (retain, nonatomic) NSNumber *canShowFollowButton;
@property (retain, nonatomic) NSNumber *canShowReasonLabel;
@property (copy, nonatomic) NSString *enterProfileType;
@property (retain, nonatomic) NSString *nowType;
@property (retain, nonatomic) NSMutableDictionary *extraDic;
@property (nonatomic) long long relationTag;

- (void).cxx_destruct;
- (id)init;

@end
