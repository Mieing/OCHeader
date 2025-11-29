@class NSString, AWEVisitFrequentUserVideoListIndicatorConfig, NSMutableArray, UIView;

@interface AWEVisitFrequentUserVideoListIndicatorDotView : UIView <AWEVisitFrequentUserVideoListIndicatorProtocol>

@property (retain, nonatomic) AWEVisitFrequentUserVideoListIndicatorConfig *config;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) unsigned long long numberOfIndicator;
@property (retain, nonatomic) NSMutableArray *dotViewArray;
@property (retain, nonatomic) UIView *selectedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDotCount:(long long)a0 dotConfig:(id)a1;
- (void)moveIndicatorToIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)moveIndicatorToIndex:(unsigned long long)a0;
- (id)initWithDotCount:(long long)a0;
- (void).cxx_destruct;

@end
