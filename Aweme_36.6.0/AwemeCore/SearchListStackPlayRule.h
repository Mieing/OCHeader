@class NSString, AWESearchAutoPlayHandler;

@interface SearchListStackPlayRule : NSObject <AWESearchAutoPlayRuleProtocol>

@property (nonatomic) double disappearWidth;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4;
- (void).cxx_destruct;
- (unsigned long long)ruleType;

@end
