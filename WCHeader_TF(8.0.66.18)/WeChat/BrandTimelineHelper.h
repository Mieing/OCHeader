@interface BrandTimelineHelper : NSObject

+ (void)openContactSession:(id)a0 fromOftenRead:(BOOL)a1 fromVC:(id)a2;
+ (void)unsubscribeContact:(id)a0;
+ (void)jumpWeappOpWrap:(id)a0 fromMsgWrap:(id)a1 fromVC:(id)a2;
+ (BOOL)shouldGoToEmoticonDetail:(id)a0 fromUsername:(id)a1 fromVC:(id)a2;
+ (void)showReader:(id)a0 fromMsgWrap:(id)a1 viewModel:(id)a2 fromVC:(id)a3 videoExtInfo:(id)a4 enterSource:(unsigned long long)a5 completionBlock:(id /* block */)a6;
+ (void)openMPArticleWithInfo:(id)a0 enterSource:(unsigned long long)a1 fromVC:(id)a2;
+ (void)openMPUrlWithInfo:(id)a0 enterSource:(unsigned long long)a1 fromVC:(id)a2;
+ (id)getWebViewController:(id)a0 url:(id)a1 forPeek:(BOOL)a2 fromMsgWrap:(id)a3 vcType:(unsigned int)a4;
+ (id)webViewExtraInfoWithReaderWrap:(id)a0 msgWrap:(id)a1 vcType:(unsigned int)a2;
+ (id)webViewExtraInfoWithRecMsgWithStyle:(unsigned int)a0 accountData:(id)a1 appMsg:(id)a2;
+ (void)openRecommendMsgWithViewModel:(id)a0 fromVC:(id)a1 completionBlock:(id /* block */)a2;
+ (void)openRecommendMsgWithViewModel:(id)a0 fromVC:(id)a1 enterScene:(unsigned int)a2 enterSubscene:(unsigned int)a3 completionBlock:(id /* block */)a4;
+ (void)openRecoFlowMsgWithSectionData:(id)a0 withIndexPath:(id)a1 fromVC:(id)a2 completionBlock:(id /* block */)a3;
+ (void)openRecoFlowAggregationMsgWithBTRecoFlowMsgOpenParams:(id)a0 fromVC:(id)a1 completionBlock:(id /* block */)a2;
+ (void)asyncNotifyEnterChat:(id)a0;
+ (id)getHeaderImgUrl:(id)a0 contact:(id)a1;

@end
