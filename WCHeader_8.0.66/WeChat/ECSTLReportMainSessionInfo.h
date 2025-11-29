@class CMessageWrap;

@interface ECSTLReportMainSessionInfo : NSObject

@property (nonatomic) unsigned long long rowIndexMainFrame;
@property (nonatomic) BOOL isShowRedDot;
@property (nonatomic) unsigned int msgNotifyType;
@property (nonatomic) unsigned int unreadCount;
@property (retain, nonatomic) CMessageWrap *sessionMsg;

- (unsigned int)getEnterRedDotMsgType;
- (void).cxx_destruct;

@end
