@class UIView, IESECLiveContext;
@protocol IESECLiveSliceViewWrapper;

@interface IESECLiveSliceManager : NSObject

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<IESECLiveSliceViewWrapper> sliceWrapper;
@property (copy, nonatomic) id /* block */ clickEvent;
@property (copy, nonatomic) id /* block */ exposureEvent;
@property (copy, nonatomic) id /* block */ customizedEvent;

- (id)initWithLiveContext:(id)a0;
- (void)setOnClickEvent:(id /* block */)a0;
- (void)setOnExposureEvent:(id /* block */)a0;
- (void)setOnCustomizedEvent:(id /* block */)a0;
- (void)getSliceViewWrapperWithTemplateURL:(id)a0 data:(id)a1 onCompletion:(id /* block */)a2;
- (void)reclaimSliceViewIfNeeded;
- (void)closeSliceView;
- (void)addSliceView:(id)a0;
- (void).cxx_destruct;

@end
