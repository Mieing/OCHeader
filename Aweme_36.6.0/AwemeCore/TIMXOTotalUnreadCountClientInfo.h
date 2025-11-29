@protocol TIMXOTotalUnreadCountClient;

@interface TIMXOTotalUnreadCountClientInfo : NSObject

@property (weak, nonatomic) id<TIMXOTotalUnreadCountClient> client;
@property (nonatomic) BOOL dbDataReady;
@property (nonatomic) BOOL offlinePullDataReady;

- (void).cxx_destruct;

@end
