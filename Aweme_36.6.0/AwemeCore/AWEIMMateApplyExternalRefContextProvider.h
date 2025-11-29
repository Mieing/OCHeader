@class NSString, IESIMExternalRefMateApplyInfo;

@interface AWEIMMateApplyExternalRefContextProvider : NSObject <IESIMMessageExternalRefContextProvider>

@property (copy, nonatomic) NSString *replyUserID;
@property (copy, nonatomic) IESIMExternalRefMateApplyInfo *mateApplyInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSupportMessageType:(long long)a0;
- (id)externalRefWithMessageType:(long long)a0;
- (BOOL)canBeQuoteReplied;
- (id)quoteHint;
- (id)quoteString;
- (void)prepareExternalContentForMessage:(id)a0;
- (long long)quoteReplyNumberOfRows;
- (void).cxx_destruct;

@end
