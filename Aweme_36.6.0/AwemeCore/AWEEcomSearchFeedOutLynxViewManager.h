@class NSArray, NSMutableDictionary, NSDictionary, UIView, NSMutableArray, NSString;

@interface AWEEcomSearchFeedOutLynxViewManager : NSObject <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) NSMutableArray *lynxViewTypes;
@property (retain, nonatomic) UIView *lynxSuperView;
@property (retain, nonatomic) NSArray *pushTimeFeedOutLynxModel;
@property (retain, nonatomic) NSMutableDictionary *publicLynxViewPendant;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)creatBDXLynxViewWithModel:(id)a0;
- (void)updateLynxViewUIWithModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1 lynxView:(id)a2;
- (void)configUIWithLynxView:(id)a0 model:(id)a1;
- (id)initWithSuperView:(id)a0;
- (void)bindLynxViewWithModel:(id)a0;
- (void).cxx_destruct;

@end
