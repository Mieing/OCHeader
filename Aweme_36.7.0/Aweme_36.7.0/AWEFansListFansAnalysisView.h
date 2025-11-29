@class UIView, NSString, AWEFansListFansAnalysisViewConfig;
@protocol AnnieXContainerBaseProtocol;

@interface AWEFansListFansAnalysisView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) AWEFansListFansAnalysisViewConfig *config;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateLynxViewSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;

@end
