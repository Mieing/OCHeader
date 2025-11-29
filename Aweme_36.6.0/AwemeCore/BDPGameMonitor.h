@class NSMutableArray, NSString, NSTimer, BDPUniqueID, NSLock;
@protocol BDPMonitorableObjectProtocol;

@interface BDPGameMonitor : NSObject <BDPBusinessMonitorProtocol>

@property (weak, nonatomic) id<BDPMonitorableObjectProtocol> gameEngine;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSTimer *collectTimer;
@property (retain, nonatomic) NSLock *dataLock;
@property (retain, nonatomic) NSMutableArray *collectedDatas;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) id /* block */ flushAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithGameEngine:(id)a0 uniqueID:(id)a1;

- (id)paramsForReport;
- (void)flushMonitor;
- (void)startImmediately:(BOOL)a0;
- (id)gameDatas;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)collectData;

@end
