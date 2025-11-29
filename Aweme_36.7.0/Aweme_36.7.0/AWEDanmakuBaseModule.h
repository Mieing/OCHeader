@class AWEAwemeModel, NSString, AWEDanmakuPageContext;

@interface AWEDanmakuBaseModule : NSObject <AWEDanmakuItemLifeCycleProtocol, AWEDanmakuPlayerStatusCycleProtocol, AWEDanmakuContainerLifeCycleProtocol>

@property (weak, nonatomic) AWEDanmakuPageContext *context;
@property (readonly, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeModule;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
