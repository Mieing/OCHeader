@class NSString;
@protocol IESECMallLynxRenderMonitorDelegate;

@interface IESECMallLynxRenderMonitor : NSObject

@property (nonatomic) unsigned long long totleCountInFirstScreen;
@property (nonatomic) unsigned long long hitPreloadCountInFirstScreen;
@property (nonatomic) BOOL didFirstScreen;
@property (copy, nonatomic) NSString *scene;
@property (weak, nonatomic) id<IESECMallLynxRenderMonitorDelegate> delegate;

- (void)lynxCard:(id)a0 didLoadFail:(id)a1 resource:(id)a2 itemModel:(id)a3;
- (void)lynxCard:(id)a0 didFirstScreen:(id)a1 resource:(id)a2 itemModel:(id)a3 isPreloader:(BOOL)a4;
- (void)lynxCard:(id)a0 didUpdateDataWithLynxViewFromType:(unsigned long long)a1 resource:(id)a2 itemModel:(id)a3 perfDict:(id)a4;
- (void)handleLynxRender:(id)a0 resource:(id)a1;
- (void)trackerLynxRenderLog:(id)a0;
- (id)resourceFrom:(long long)a0;
- (void)trackerLynxUpdateLog:(id)a0;
- (void)realLynxCard:(id)a0 didLoadFail:(id)a1 resource:(id)a2 itemModel:(id)a3 scene:(id)a4;
- (void)realLynxCard:(id)a0 didFirstScreen:(id)a1 resource:(id)a2 itemModel:(id)a3 isPreloader:(BOOL)a4 isPreDecode:(BOOL)a5 scene:(id)a6;
- (void)lynxCard:(id)a0 didFirstScreen:(id)a1 resource:(id)a2 itemModel:(id)a3 isPreloader:(BOOL)a4 isPreDecode:(BOOL)a5;
- (void)realLynxCard:(id)a0 didUpdateDataWithLynxViewFromType:(unsigned long long)a1 resource:(id)a2 itemModel:(id)a3 perfDict:(id)a4 isFirstScreen:(long long)a5;
- (void)lynxCard:(id)a0 onSetup:(id)a1 resource:(id)a2 itemModel:(id)a3 isPreloader:(BOOL)a4 isPreDecode:(BOOL)a5;
- (void).cxx_destruct;
- (id)init;

@end
