@class NSString, PrepareFinder, WCFinderUserMessage, WCFinderContact;

@interface WCFinderPersonalContactModel : NSObject <WCFinderContactExt, WCFinderRedDotNotifyExt>

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) PrepareFinder *prepare;
@property (retain, nonatomic) WCFinderUserMessage *userMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)finderMsgRedDotInfo;
- (void)onFinderContactUpdate:(id)a0;
- (void)onFinderNotifyUnreadMentionCountNeedReloadWithUsername:(id)a0;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReloadWithUsername:(id)a0;
- (void).cxx_destruct;

@end
