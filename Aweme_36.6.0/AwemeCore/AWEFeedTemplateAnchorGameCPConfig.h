@class NSDictionary;

@interface AWEFeedTemplateAnchorGameCPConfig : AWEFeedTemplateAnchorBaseConfig

@property (nonatomic) BOOL hasFullTextShow;
@property (nonatomic) BOOL hasTwoLineAnimation;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (retain, nonatomic) NSDictionary *anchorStructExtra;
@property (nonatomic) BOOL didCreateContainer;

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorClick;
- (BOOL)shouldBusinessInvoke;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (void)didShowDoubleLineStyleAnchor;
- (id)subDesc;
- (void)createContainerIfNeed;
- (void)destroyContainerIfNeed;
- (void)addAnimationBlockPeriodIfNeed;
- (BOOL)isDefaultShowTwoLineStyle;
- (void)removeAnimationBlockPeriodIfNeed;
- (id)videoAnchorInterface;
- (id)anchorContext;
- (id)getAnchorMediaTypeStr;
- (void)trackGameCPEventWithName:(id)a0;
- (double)toTwoLineStyleDelay;
- (void).cxx_destruct;
- (void)dealloc;

@end
