@class ReddotExposeMoment, CMessageWrap;

@interface BrandReportMainSessionInfo : NSObject

@property (nonatomic) unsigned long long rowIndexMainFrame;
@property (nonatomic) BOOL isShowRedDot;
@property (nonatomic) unsigned int msgNotifyType;
@property (nonatomic) unsigned int unreadCount;
@property (retain, nonatomic) CMessageWrap *sessionMsg;
@property (retain, nonatomic) ReddotExposeMoment *beginMoment;
@property (retain, nonatomic) ReddotExposeMoment *endMoment;
@property (nonatomic) double beginMainFrameScrollOffset;

- (unsigned int)getEnterRedDotMsgType;
- (void).cxx_destruct;

@end
