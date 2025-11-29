@interface AWEIMRefactorQuoteReplyUtils : NSObject

+ (BOOL)quotedContentIsAvailableWithOriginMsg:(id)a0;
+ (id)quotedInvisibleStringWithOriginMsg:(id)a0;
+ (BOOL)disableQuoteReplyForMessage:(id)a0 conversation:(id)a1;
+ (BOOL)isFeedExternalRefMessage:(id)a0;
+ (BOOL)canShowQuoteReply:(id)a0;
+ (BOOL)currentMsgType:(long long)a0 canQuoteReplyType:(long long)a1;
+ (id)hintOnInputVCWithMessage:(id)a0;
+ (void)didTapQuotedText:(id)a0 context:(id)a1;
+ (BOOL)enableShowDetailStyleQuoteReply:(id)a0;
+ (BOOL)isFeedReplyFakeQuote:(id)a0;
+ (BOOL)currentMsgType:(long long)a0 canQuoteReplyType:(long long)a1 quoteMessage:(id)a2;
+ (BOOL)canBeQuotedReplyWithType:(long long)a0;
+ (BOOL)p_canShowExternalRefMessage:(id)a0;
+ (BOOL)isRedpacketMessage:(long long)a0;
+ (BOOL)isMostFrequentlyUsedMsgType:(long long)a0;
+ (BOOL)isUnavailableDuoshanMessage:(id)a0;

@end
