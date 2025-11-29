@class NSString, AWESearchAutoPlayHandler, UIView;
@protocol AWESearchAutoPlayCardProtocol;

@interface AWESearchCachalotLivePlayRule : NSObject <AWESearchAutoPlayRuleProtocol>

@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *lastActiveView;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4;
- (struct CGPoint { double x0; double x1; })autoplayZoneBoundaryWithContainerView:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)ruleType;

@end
