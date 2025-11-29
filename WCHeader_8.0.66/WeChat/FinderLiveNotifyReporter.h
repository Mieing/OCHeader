@interface FinderLiveNotifyReporter : NSObject

+ (void)reportNoticeOperation:(long long)a0 commentScene:(id)a1 notifyMsgItem:(id)a2 msgExt:(id)a3;
+ (void)reportNoticeOperation:(long long)a0 commentScene:(id)a1 notifyMsgItem:(id)a2 msgExt:(id)a3 sessionBuffer:(id)a4;
+ (void)reportNoticeOperation:(long long)a0 commentScene:(id)a1 notifyMsgItem:(id)a2 msgExt:(id)a3 chnlExtraDict:(id)a4;
+ (void)reportNoticeOperation:(long long)a0 commentScene:(id)a1 notifyMsgItem:(id)a2 msgExt:(id)a3 chnlExtraDict:(id)a4 sessionBuffer:(id)a5;
+ (void)reportMainFrameExposeWithMsg:(id)a0 rowIndex:(unsigned long long)a1 firstExpose:(BOOL)a2 unreadCount:(unsigned int)a3 sessionBuffer:(id)a4;
+ (void)reportMainFrameClickWithMsg:(id)a0 rowIndex:(unsigned long long)a1 firstClick:(BOOL)a2 unreadCount:(unsigned int)a3 sessionBuffer:(id)a4;
+ (void)reportReplaceMsgTipsID:(id)a0 unReadAndLiveEndCount:(unsigned int)a1 deleteTipsID:(id)a2;
+ (id)getReportExtInfoFromMsg:(id)a0;

@end
