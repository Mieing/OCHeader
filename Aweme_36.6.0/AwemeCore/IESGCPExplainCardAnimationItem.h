@class IESGCPExplainCardLynxContainerView;

@interface IESGCPExplainCardAnimationItem : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (retain, nonatomic) IESGCPExplainCardLynxContainerView *view;
@property (copy, nonatomic) id /* block */ beginHandler;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void).cxx_destruct;

@end
