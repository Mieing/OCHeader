@class IESECSliceXDataSource;

@interface IESECSliceXContainerUpdateContext : NSObject

@property (retain, nonatomic) IESECSliceXDataSource *dataSource;
@property (nonatomic) struct CGSize { double width; double height; } fitSize;
@property (copy, nonatomic) id /* block */ complete;
@property (readonly, nonatomic) BOOL avoidCalculateSize;

- (id)initWithDataSource:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 complete:(id /* block */)a2;
- (id)initWithDataSource:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
