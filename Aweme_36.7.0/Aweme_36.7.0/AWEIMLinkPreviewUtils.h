@class NSString;

@interface AWEIMLinkPreviewUtils : NSObject <AWEIMLinkPreviewUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldReloadViewModelWithOriginMessage:(id)a0 updateMessage:(id)a1;
+ (void)trackLinkClickWithConversation:(id)a0 message:(id)a1 linkModel:(id)a2;
+ (id)linkModelOfTextHighlight:(id)a0;
+ (void)trackLinkClickWithConversation:(id)a0 message:(id)a1 context:(id)a2 highlight:(id)a3;
+ (id)linkPreviewExtDictOfMessage:(id)a0;
+ (id)p_linkPreviewInfoOfMessage:(id)a0;
+ (BOOL)hasVaildLinkVideoLocalExtDictOfMessage:(id)a0;
+ (id)linkArrayWithMessage:(id)a0;
+ (id)textContentWithMessage:(id)a0;
+ (id)linkVideoItemIdOfMessage:(id)a0;
+ (BOOL)shouldShowLinkVideoCoverOfMessage:(id)a0;
+ (id)localExtWithLinkTextAndQuoteMessage:(id)a0 con:(id)a1;


@end
