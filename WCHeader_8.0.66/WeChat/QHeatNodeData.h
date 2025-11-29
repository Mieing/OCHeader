@class NSString;

@interface QHeatNodeData : NSObject <QQuadTreeNodeData>

@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) double value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
