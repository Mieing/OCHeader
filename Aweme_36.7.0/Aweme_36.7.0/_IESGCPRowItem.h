@class IESGCPDetailBaseViewControl, IESGCPDetailBaseView;

@interface _IESGCPRowItem : NSObject

@property (retain, nonatomic) IESGCPDetailBaseViewControl *control;
@property (retain, nonatomic) IESGCPDetailBaseView *view;
@property (nonatomic) double weight;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginRight;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginBottom;

- (void).cxx_destruct;

@end
