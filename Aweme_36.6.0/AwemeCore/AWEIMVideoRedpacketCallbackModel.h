@class NSString, AWEIMDouyinRedPacketModel;

@interface AWEIMVideoRedpacketCallbackModel : NSObject <AWEIMVideoRedPacketCallbackProtocol>

@property (nonatomic) BOOL requestSuccess;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL isOpened;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long receiveCondition;
@property (nonatomic) BOOL isAllReceived;
@property (nonatomic) BOOL isOverDue;
@property (retain, nonatomic) AWEIMDouyinRedPacketModel *infoModel;
@property (nonatomic) long long fansButtonStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
