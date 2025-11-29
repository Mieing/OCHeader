@class NSArray, NSString, HTSEventForwardingView, UIView;

@interface IESLiveLayoutZContainer : NSObject <IESLiveLayoutContainer>

@property (retain, nonatomic) HTSEventForwardingView *forwardingView;
@property (retain, nonatomic) NSArray *sortedLevels;
@property (readonly, nonatomic) UIView *view;
@property (readonly, copy, nonatomic) NSString *containerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubview:(id)a0 viewType:(id)a1;
- (void)addSubview:(id)a0 viewType:(id)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)addPluginview:(id)a0;
- (void)addSubview:(id)a0 viewType:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)addSubview:(id)a0 viewType:(id)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)viewContainersMapping;
- (id)initWithIdentifier:(id)a0 sortedLevels:(id)a1;
- (void).cxx_destruct;
- (id)itemForType:(id)a0;
- (void)removeType:(id)a0;

@end
