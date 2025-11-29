@class IESLiveComponentProcessContext, NSMutableDictionary, NSArray;

@interface IESLiveComponentReusePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *modules;
@property (retain, nonatomic) NSMutableDictionary *components;
@property (nonatomic) BOOL enable;
@property (weak, nonatomic) IESLiveComponentProcessContext *context;
@property (retain, nonatomic) NSArray *blackList;
@property (nonatomic) BOOL loadFinished;

- (void)reuseBindService:(id)a0;
- (id)reuseComponentWithName:(id)a0;
- (id)reuseModuleWithName:(id)a0;
- (void)recordComponent:(id)a0;
- (void)recordModule:(id)a0;
- (void)callFuncWithComponent:(id)a0 stateCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
