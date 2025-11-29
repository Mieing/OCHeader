@class UIColor, NSString, NSMutableDictionary, NSDictionary;
@protocol InviteFriendLogicDelegate;

@interface InviteFriendLogic : NSObject <MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, PBMessageObserverDelegate> {
    id<InviteFriendLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicMsg;
    NSMutableDictionary *m_dicSubject;
    BOOL m_bDefaultWording;
    UIColor *m_oldBarTintColor;
    NSDictionary *m_oldTitleTextAttributes;
    long long m_oldUIBarStyle;
}

@property (nonatomic) unsigned int fromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isShowEntryInMainFrame;
+ (BOOL)isShowEntryInContactList;
+ (BOOL)isEntryOnTheTop;
+ (BOOL)isShowInvite;
+ (BOOL)isShowEmail;
+ (BOOL)isShowSMS;
+ (BOOL)isShowWhatsapp;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (id)getMsg:(unsigned int)a0;
- (id)getInviteSources;
- (id)getSubject:(unsigned int)a0;
- (void)saveOldSetting;
- (void)recoverOldSetting;
- (void)startInviteEmail;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)startInviteMessage;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)startInviteWhatsapp;
- (void)updateWording:(unsigned int)a0;
- (void)startAgain:(id)a0;
- (void)handleGetMsg:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)reportInvitationSendStatus:(unsigned int)a0 result:(BOOL)a1;
- (void).cxx_destruct;

@end
