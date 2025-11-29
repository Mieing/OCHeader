@class NSMutableArray, AWENearbyResourceOfPopupModel;

@interface AWENearbyDialogLynxContainer : NSObject

@property (retain, nonatomic) AWENearbyResourceOfPopupModel *lastModel;
@property (nonatomic) BOOL isLeaveNearbyLifeTab;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (copy, nonatomic) id /* block */ closeBlk;
@property (copy, nonatomic) id /* block */ showBlk;

+ (id)addExtraParams:(id)a0;

- (void)showLynxDialogContainerWithContainerModel:(id)a0 showBlk:(id /* block */)a1 closeBlk:(id /* block */)a2 isFromTask:(BOOL)a3;
- (void)enterNearbyLifeTab;
- (void)leaveNearbyLifeTab;
- (void)registerDialogLynxContainerJSEvent;
- (void)execShowLynxDialogContainerWithContainerModel:(id)a0 isFromTask:(BOOL)a1;
- (BOOL)avoidOtherDialogWithModel:(id)a0 isFromTask:(BOOL)a1;
- (id)handleSceneSchemaWithModel:(id)a0;
- (BOOL)shouldLynxPopAvoidColdLaunch:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
