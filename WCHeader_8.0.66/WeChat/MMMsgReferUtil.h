@interface MMMsgReferUtil : NSObject

+ (unsigned int)GetReportMsgType:(id)a0;
+ (void)ReportSendReferMsg:(id)a0 chatName:(id)a1;
+ (void)ReportClickReferMsg:(id)a0 chatName:(id)a1 hasLocalMsg:(BOOL)a2;
+ (void)ReportMsg:(id)a0 action:(unsigned int)a1;
+ (void)ReportFavReferMsgItem:(id)a0 action:(unsigned int)a1;
+ (void)ReportMsg:(id)a0 action:(unsigned int)a1 scene:(unsigned int)a2;
+ (BOOL)isExptReplyMsgOpen;
+ (BOOL)isOpenTextSelectReplyMsg;
+ (BOOL)isOpenNewPartReferMaskBlur;
+ (BOOL)isOpenVideoImageReplyMsg;
+ (BOOL)isReplyNewStyleOpen;
+ (id)getReplyMsg:(id)a0;
+ (void)resetReplyMsg:(id)a0;

@end
