@interface WWKFReportUtil : MMObject

+ (void)reportFlowAction:(long long)a0;
+ (void)reportFlowAction:(long long)a0 userName:(id)a1;
+ (void)reportFlowAction:(long long)a0 userName:(id)a1 extInfo:(id)a2;
+ (void)reportFlowAction:(long long)a0 scene:(int)a1 contact:(id)a2;
+ (void)reportFlowAction:(long long)a0 scene:(int)a1 contact:(id)a2 extInfo:(id)a3;
+ (int)chatTypeWithContact:(id)a0;
+ (unsigned int)getToolbarItemLinkTypeWithActionUrl:(id)a0;
+ (id)getKFChatSessionId;
+ (void)reportBannerState:(id)a0 showType:(unsigned int)a1 isBannerShow:(BOOL)a2 bannerKeFuType:(unsigned int)a3;

@end
