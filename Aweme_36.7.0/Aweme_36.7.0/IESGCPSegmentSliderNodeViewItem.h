@class NSString, UIView;

@interface IESGCPSegmentSliderNodeViewItem : NSObject <IESGCPSegmentSliderNodeViewItemProtocol>

@property (nonatomic) double nodeViewMaxY;
@property (nonatomic) BOOL isAppeared;
@property (nonatomic) unsigned long long nodeViewType;
@property (weak, nonatomic) UIView *nodeView;
@property (copy, nonatomic) id /* block */ isAppearedBlock;
@property (copy, nonatomic) id /* block */ appearedStatusChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
