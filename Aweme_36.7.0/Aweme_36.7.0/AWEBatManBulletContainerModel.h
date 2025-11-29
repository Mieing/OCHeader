@class NSString, NSDictionary, NSTimer, AWEBatManDynamicContainer, BDPUniqueID;
@protocol BDXContainerProtocol;

@interface AWEBatManBulletContainerModel : AWEBatManBaseContainerModel

@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (weak, nonatomic) id<BDXContainerProtocol> container;
@property (retain, nonatomic) NSString *stage;
@property (nonatomic) long long showLevel;
@property (nonatomic) long long pageID;
@property (nonatomic) BOOL hiddenForLynx;
@property (nonatomic) BOOL customNavi;
@property (weak, nonatomic) AWEBatManDynamicContainer *batManContainer;
@property (nonatomic) double top;
@property (copy, nonatomic) NSDictionary *perfDict;

+ (void)mpBulletContainerStage:(id)a0 operationType:(id)a1 msg:(id)a2;

- (id)showLevelString;
- (void).cxx_destruct;
- (void)destroyTimeoutTimer;

@end
