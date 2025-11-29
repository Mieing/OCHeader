@class NSTimer;

@interface MatrixTester : NSObject

@property (retain, nonatomic) NSTimer *runloopTimer;
@property (retain, nonatomic) NSTimer *runloop2Timer;

- (void)swiftCrash;
- (void)pureSwiftCrash;
- (void)notFoundSelectorCrash;
- (void)wrongFormatCrash;
- (void)deadSignalCrash;
- (void)nsexceptionCrash;
- (void)cppexceptionCrash;
- (void)cppToNsExceptionCrash;
- (void)childNsexceptionCrash;
- (void)overflowCrash;
- (void)foo;
- (void)fooo:(char *)a0;
- (void)generateMainThreadLagLog;
- (void)generateMainThreadBlockToBeKilledLog;
- (void)testSpecialSceneOfLag;
- (void)runloop1Selector;
- (void)runloop2Selector;
- (void)costCPUALot;
- (void)writeMassData;
- (void)readMassData;
- (void).cxx_destruct;

@end
