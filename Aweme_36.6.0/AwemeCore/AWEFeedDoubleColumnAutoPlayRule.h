@class AWEDCFeedAutoPlayHandler, NSString;

@interface AWEFeedDoubleColumnAutoPlayRule : AWEDCFeedAutoPlayBaseRule <AWEDCFeedAutoPlayRuleProtocol>

@property (nonatomic) double activeRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) double shouldNotActiveHeight;
@property (weak, nonatomic) AWEDCFeedAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (unsigned long long)rulePriority;
- (id)getAutoPlayViewFromViews:(id)a0 inContainer:(id)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 directionPoint:(struct CGPoint { double x0; double x1; })a3 speedPoint:(struct CGPoint { double x0; double x1; })a4 scence:(unsigned long long)a5;
- (void)setAutoPlayIsPlaying:(BOOL)a0 withView:(id)a1 playType:(unsigned long long)a2;
- (double)autoPlayDefaultTimeWithView:(id)a0 playType:(unsigned long long)a1;
- (void)autoPlayPlayerStateDidChangeWithView:(id)a0 state:(unsigned long long)a1 player:(id)a2;
- (long long)autoPlayDefauleIndexWithView:(id)a0 playType:(unsigned long long)a1;
- (void)autoPlaySliderViewStateDidChangeWithView:(id)a0 state:(unsigned long long)a1 slideView:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)ruleType;

@end
