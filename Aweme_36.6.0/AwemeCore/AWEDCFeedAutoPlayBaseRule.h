@class AWEDCFeedAutoPlayHandler, NSString;

@interface AWEDCFeedAutoPlayBaseRule : NSObject <AWEDCFeedAutoPlayRuleProtocol>

@property (weak, nonatomic) AWEDCFeedAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)rulePriority;
- (BOOL)enableActiveRect;
- (double)__calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)enableCenterYOpti;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4 scence:(unsigned long long)a5;
- (id)filterActivatableViewsFromViews:(id)a0 container:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4 scence:(unsigned long long)a5;
- (id)determineBestAutoPlayViewFromActivatableViews:(id)a0 container:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4 scence:(unsigned long long)a5;
- (id)container;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeRect;
- (unsigned long long)ruleType;
- (id)autoPlayConfig;

@end
