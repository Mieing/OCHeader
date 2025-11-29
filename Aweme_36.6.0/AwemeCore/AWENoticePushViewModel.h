@class NSString, NSURL, NSArray, AWEInnerPushControlModel, NSAttributedString, NSDictionary, AWENoticeModularizedPushModel, NSNumber;

@interface AWENoticePushViewModel : NSObject

@property (retain, nonatomic) NSArray *avatars;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *content;
@property (copy, nonatomic) NSAttributedString *titlePrimary;
@property (copy, nonatomic) NSAttributedString *titleSecondary;
@property (copy, nonatomic) NSAttributedString *contentPrimary;
@property (copy, nonatomic) NSAttributedString *contentSecondary;
@property (nonatomic) long long noticeType;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *fromSecUid;
@property (copy, nonatomic) NSString *showedUserIDs;
@property (copy, nonatomic) NSString *fromUid;
@property (nonatomic) BOOL isInteract;
@property (nonatomic) BOOL fromQRCode;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *pushType;
@property (copy, nonatomic) NSString *oldPushType;
@property (copy, nonatomic) NSDictionary *frontierPayLoad;
@property (copy, nonatomic) NSString *extraStr;
@property (retain, nonatomic) NSNumber *dismissTimeInterval;
@property (copy, nonatomic) NSString *businessType;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;
@property (nonatomic) BOOL isSBC;
@property (copy, nonatomic) NSAttributedString *userName;
@property (copy, nonatomic) NSString *actionText;
@property (retain, nonatomic) NSURL *extImage;
@property (retain, nonatomic) AWENoticeModularizedPushModel *modularizedPushModel;
@property (retain, nonatomic) NSArray *extAvatarUrls;

+ (BOOL)isSocialInnerPushUsePlatformContainer:(id)a0;

- (id)trackEnterFrom;
- (id)p_keypointFontForContent;
- (id)p_keypointFontForTitle;
- (id)p_keypointFontAttributesForTitle:(BOOL)a0;
- (id)p_regularFontAttributesForTitle:(BOOL)a0;
- (void)trackEventSwipeGesDirectionUp;
- (id)initWithPushNotice:(id)a0;
- (id)__imPushType;
- (id)commonTrackingParams;
- (id)specNoticeType;
- (BOOL)enableLightInteractionInQRCode;
- (id)noticeChatType;
- (void)trackPushViewTapGesture;
- (void)trackInnerPushClicked;
- (id)propList;
- (void)trackEventShowWithTrackID:(id)a0;
- (void)handleCommonTapAction;
- (id)initWithPushDatas:(id)a0;
- (id)p_handleText:(id)a0 isTitle:(BOOL)a1 hasMaxWidth:(BOOL)a2;
- (id)p_clipWithFristTitle:(id)a0 secondTitle:(id)a1 type:(long long)a2 userArray:(id)a3;
- (id)commentContentWithCommentSameType:(BOOL)a0 lastCommentOldPushType:(long long)a1;
- (id)diggContentWithDiggSameType:(BOOL)a0 lastDiggOldPushType:(long long)a1;
- (BOOL)p_shouldShowReplyButtonWithType:(long long)a0;
- (void)trackNotificationNotice;
- (void).cxx_destruct;
- (BOOL)stringContainsEmoji:(id)a0;

@end
