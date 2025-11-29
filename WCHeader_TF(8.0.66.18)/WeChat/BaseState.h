@class NSString, NSMutableDictionary;

@interface BaseState : NSObject

@property (nonatomic) BOOL isFirstEntry;
@property (retain, nonatomic) NSString *stateName;
@property (retain, nonatomic) NSMutableDictionary *stateData;
@property (copy, nonatomic) id /* block */ firstEntryBlock;

- (id)init;
- (void)loadWithName:(id)a0 withSDKConfigData:(id)a1;
- (void)unload;
- (void)enter;
- (void)exit;
- (void)update:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0 withTimeStamp:(unsigned long long)a1;
- (void)updateSDKSetting:(id)a0;
- (void)reset;
- (void)onPause;
- (void)onResume;
- (void)moveToNextState;
- (void)handleInnerAction:(id)a0 data:(id)a1;
- (void)handleEvent:(id)a0;
- (void).cxx_destruct;

@end
