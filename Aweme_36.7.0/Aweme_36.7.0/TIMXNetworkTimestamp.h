@class NSString;

@interface TIMXNetworkTimestamp : NSObject <TIMXNetworkTimestampProtocol>

@property (nonatomic) int cmd;
@property (nonatomic) double clientStart;
@property (nonatomic) double clientEnd;
@property (nonatomic) double serverArrived;
@property (nonatomic) double serverExecuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
