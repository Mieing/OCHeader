@class HunterContext;
@protocol HunterContainerLifeCycleProtocol;

@interface AWEIMGrowthImpl.HunterContainerView : UIView <IESIMHunterContainerProtocol> {
    void /* unknown type, empty encoding */ containerView;
}

@property (nonatomic, readonly) HunterContext *context;
@property (nonatomic, retain) id<HunterContainerLifeCycleProtocol> lifeCycleDelegate;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)loadWithModel:(id)a0;
- (void)updateDataWithModel:(id)a0;
- (void)unRegisterEventCallBack:(id)a0;
- (void)registerEventCallBack:(id /* block */)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
