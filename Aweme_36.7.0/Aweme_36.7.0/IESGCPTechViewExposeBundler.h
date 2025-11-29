@class IESGCPTrackerNode, UIView;

@interface IESGCPTechViewExposeBundler : NSObject

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) IESGCPTrackerNode *node;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double timeout;
@property (nonatomic) double startDetectTime;

- (void).cxx_destruct;

@end
