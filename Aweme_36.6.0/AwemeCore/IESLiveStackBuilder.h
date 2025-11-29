@class IESLiveStackDynamicRule, IESLiveLayoutBaseContainer, NSString;

@interface IESLiveStackBuilder : NSObject <IESLiveStackStateObserver>

@property (retain, nonatomic) IESLiveStackDynamicRule *dynamicAction;
@property (retain, nonatomic) IESLiveLayoutBaseContainer *resultContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeAtState:(unsigned long long)a0;
- (id /* block */)ck_subviews;
- (id /* block */)dynamicRule;
- (id)initWithAxis:(long long)a0 viewType:(id)a1 spacing:(double)a2;
- (void)addSubContainerWithAxis:(long long)a0 rules:(id)a1;
- (void).cxx_destruct;

@end
