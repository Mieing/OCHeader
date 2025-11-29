@class IESECLiveSliceViewPool, IESECLiveSliceView, NSString, IESECLiveSliceViewManager, UIView;

@interface IESECLiveSliceViewWrapperImpl : NSObject <IESECLiveSliceViewWrapper>

@property (retain, nonatomic) IESECLiveSliceView *sliceView;
@property (weak, nonatomic) IESECLiveSliceViewManager *sliceViewManager;
@property (weak, nonatomic) IESECLiveSliceViewPool *sliceViewPool;
@property (copy, nonatomic) NSString *sliceViewPoolKey;
@property (copy, nonatomic) id /* block */ onClickEvent;
@property (copy, nonatomic) id /* block */ onExposureEvent;
@property (copy, nonatomic) id /* block */ onTrackEvent;
@property (copy, nonatomic) id /* block */ onCloseEvent;
@property (copy, nonatomic) id /* block */ onCustomizedEvent;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerSliceXEvent:(id)a0;
- (void)setServerTime:(unsigned long long)a0;
- (void)updateData:(id)a0 error:(id *)a1;
- (void)reclaim;
- (void)resetData:(id)a0 error:(id *)a1;
- (id)initWithSliceView:(id)a0 sliceViewManager:(id)a1 sliceViewPool:(id)a2 sliceViewPoolKey:(id)a3;
- (void)resetData:(id)a0 onCompletion:(id /* block */)a1;
- (void)triggerLiveSliceViewEvent:(id)a0;
- (void)splitGroupEventAndSend:(id)a0;
- (void)updateData:(id)a0 onCompletion:(id /* block */)a1;
- (id)initWithSliceView:(id)a0 sliceViewManager:(id)a1;
- (void).cxx_destruct;

@end
