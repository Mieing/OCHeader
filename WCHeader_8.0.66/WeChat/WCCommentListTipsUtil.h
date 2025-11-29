@interface WCCommentListTipsUtil : NSObject

+ (BOOL)shouldShowMuteTipsWithUnReadMessages:(id)a0 feedID:(id *)a1;
+ (void)setHasUseNoMoreNoticeAfterShowMuteTips;
+ (void)setMuteTipsShowTimesIncrease;
+ (id)getObjIDByWCMessage:(id)a0;

@end
