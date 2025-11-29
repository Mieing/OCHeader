@class NSNumber;

@interface DUXValueMaker : NSObject

@property (nonatomic) BOOL isFixed;
@property (nonatomic) BOOL isVertical;
@property (nonatomic) unsigned long long aCurve;
@property (copy, nonatomic) NSNumber *value;

- (double)floatExportImp;
- (struct CGPoint { double x0; double x1; })pointExportImp;
- (struct CGSize { double x0; double x1; })sizeExportImp;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectExportImp;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsExportImp;
- (id /* block */)floatExport;
- (id /* block */)pointExport;
- (id /* block */)sizeExport;
- (id /* block */)rectExport;
- (id /* block */)edgeInsetsExport;
- (void).cxx_destruct;
- (id /* block */)floatValue;
- (id /* block */)vertical;
- (id /* block */)pointValue;
- (id /* block */)curve;
- (id /* block */)fixed;
- (id /* block */)sizeValue;
- (id /* block */)rectValue;
- (id /* block */)edgeInsetsValue;

@end
