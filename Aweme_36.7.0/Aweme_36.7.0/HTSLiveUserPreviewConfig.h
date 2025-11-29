@class HTSLiveUser, NSString, NSDictionary, HTSLiveOriginRoomInfo, UIView, NSNumber;

@interface HTSLiveUserPreviewConfig : NSObject

@property (nonatomic) unsigned long long source;
@property (nonatomic) long long requestFrom;
@property (nonatomic) long long targetDisplayRole;
@property (nonatomic) BOOL hasProfileStyle;
@property (nonatomic) long long style;
@property (nonatomic) BOOL hasSmartSwitchVal;
@property (nonatomic) BOOL isOn;
@property (nonatomic) unsigned long long myRole;
@property (nonatomic) BOOL disableAdminButton;
@property (nonatomic) BOOL isPreviewAnchor;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (retain, nonatomic) NSNumber *reportContentID;
@property (retain, nonatomic) NSString *reportContent;
@property (nonatomic) BOOL isChatCommentMessage;
@property (retain, nonatomic) NSDictionary *reportDic;
@property (retain, nonatomic) HTSLiveUser *targetReportUser;
@property (retain, nonatomic) NSDictionary *reportUrlExtraParams;
@property (readonly, copy, nonatomic) NSString *sourceString;
@property (readonly, copy, nonatomic) NSString *reportType;
@property (readonly, copy, nonatomic) NSString *reportShowType;
@property (readonly, copy, nonatomic) NSString *reportRequestPage;
@property (retain, nonatomic) NSString *followPosition;
@property (copy, nonatomic) NSNumber *followScene;
@property (retain, nonatomic) NSString *clickUserPosition;
@property (copy, nonatomic) NSString *ksongUserType;
@property (copy, nonatomic) NSString *ksongToUserType;
@property (retain, nonatomic) NSNumber *order;
@property (nonatomic) BOOL fromFallback;
@property (nonatomic) BOOL showMask;
@property (copy, nonatomic) id /* block */ onFollowStatusChange;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isOfficalMsg;
@property (nonatomic) BOOL isOtherLiveRoom;
@property (nonatomic) BOOL intercomHideUserCard;
@property (nonatomic) BOOL isStarComment;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) BOOL anonymousUseToast;
@property (retain, nonatomic) HTSLiveUser *anonymousUser;
@property (nonatomic) long long onlyID;
@property (retain, nonatomic) NSNumber *publicScreenID;
@property (retain, nonatomic) NSString *commentEnterPosition;
@property (copy, nonatomic) NSDictionary *vsCommentTrackParams;
@property (retain, nonatomic) NSDictionary *businessTrackParams;
@property (nonatomic) BOOL isSquareComment;
@property (retain, nonatomic) HTSLiveOriginRoomInfo *jumpRoomInfo;
@property (nonatomic) BOOL skipPrivacyCheck;
@property (copy, nonatomic) NSDictionary *followParams;
@property (nonatomic) BOOL isMyLive;
@property (nonatomic) BOOL isPreload;

- (void).cxx_destruct;
- (id)init;

@end
