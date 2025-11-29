@class ReddotExposeMoment, CMessageWrap;

@interface BrandTLMainSessionExposeItem : MMObject

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned long long startTimeMs;
@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned int uNewNotifyMsgCount;
@property (nonatomic) unsigned int unReadCount;
@property (nonatomic) unsigned int liveNotifyType;
@property (nonatomic) unsigned int brandNotifyType;
@property (retain, nonatomic) ReddotExposeMoment *beginMoment;
@property (retain, nonatomic) ReddotExposeMoment *endMoment;
@property (nonatomic) double beginMainFrameScrollOffset;

- (BOOL)isLiveNotifyMsgExposedItem;
- (void).cxx_destruct;

@end
