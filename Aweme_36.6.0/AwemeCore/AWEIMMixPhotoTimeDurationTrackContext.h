@class NSString;

@interface AWEIMMixPhotoTimeDurationTrackContext : NSObject

@property (nonatomic) double clientReqTime;
@property (nonatomic) double serverReceiveReqTime;
@property (nonatomic) double serverReqUpdateMsgTime;
@property (nonatomic) double clientReceiveMsgUpdatedTime;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) BOOL isTimeOut;

- (void).cxx_destruct;

@end
