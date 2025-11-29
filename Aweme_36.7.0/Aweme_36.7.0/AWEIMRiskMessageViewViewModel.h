@class UIFont, NSString, NSDictionary, UIColor;
@protocol IESIMMessageProtocol;

@interface AWEIMRiskMessageViewViewModel : NSObject <NSCopying, AWEIMMessageRiskModelProtocol>

@property (copy, nonatomic) NSDictionary *riskViewSetting;
@property (retain, nonatomic) id<IESIMMessageProtocol> iesMessage;
@property (nonatomic) BOOL riskMessageIsNeedKick;
@property (nonatomic) BOOL riskViewIsTracked;
@property (nonatomic) unsigned long long riskMessageType;
@property (copy, nonatomic) NSString *riskInfoText;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double marginLeft;
@property (copy, nonatomic) id /* block */ tapAction;
@property (nonatomic) long long order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)riskViewModelWithCon:(id)a0 message:(id)a1 iesMessage:(id)a2;
+ (BOOL)enableShowFansGroupSpamMessageRiskViewWithCon:(id)a0 message:(id)a1;
+ (id)fansGroupSpamMessageViewViewModelWithMessage:(id)a0 iesMessage:(id)a1;
+ (BOOL)__generatePermissionWithUserID:(id)a0 msgSenderID:(id)a1 conversation:(id)a2;
+ (BOOL)__authorizedUsersContainUserID:(id)a0 inConversation:(id)a1;

- (void)willDisplayByMessageVisibleLifeCycle;
- (void)didEndDisplayingByMessageVisibleLifeCycle;
- (BOOL)shouldShowRiskView;
- (void)trackRiskViewDisplay;
- (struct CGSize { double x0; double x1; })sizeOfRiskInfoText;
- (id)riskAlertTextWithUid:(id)a0 mentionName:(id)a1;
- (id)riskAlertOptionWithAttributedString:(id)a0 selectedState:(BOOL)a1;
- (void)updateRiskViewVMWithMessage:(id)a0;
- (void)trackFansGroupSpamMessageViewDisplay;
- (BOOL)shouldShowFansGroupSpamMessageView;
- (void)updateFansGroupSpamMessageViewVMWithMessage:(id)a0;
- (id)__attributedMentionNameWithUid:(id)a0 mentionName:(id)a1 maxWidth:(double)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
