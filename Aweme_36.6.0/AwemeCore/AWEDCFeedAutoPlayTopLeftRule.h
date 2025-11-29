@class AWEDCFeedAutoPlayHandler, NSString;

@interface AWEDCFeedAutoPlayTopLeftRule : AWEDCFeedAutoPlayBaseRule <AWEDCFeedAutoPlayRuleProtocol>

@property (nonatomic) double activeRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) double shouldNotActiveHeight;
@property (weak, nonatomic) AWEDCFeedAutoPlayHandler *handler;
@property (copy, nonatomic) NSString *autoPlayAwemeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)rulePriority;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4 scence:(unsigned long long)a5;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)ruleType;

@end
