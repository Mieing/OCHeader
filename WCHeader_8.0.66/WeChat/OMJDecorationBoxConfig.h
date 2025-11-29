@class OMJID, NSArray, OMJHandleBoxBorderStyle;

@interface OMJDecorationBoxConfig : NSObject

@property (readonly, nonatomic) OMJID *segmentID;
@property (readonly, nonatomic) NSArray *boxItems;
@property (readonly, nonatomic) NSArray *titles;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, nonatomic) OMJHandleBoxBorderStyle *borderStyle;

- (id)initWithSegmentID:(id)a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 borderStyle:(id)a2;
- (id)initWithSegmentID:(id)a0 boxItems:(id)a1 titles:(id)a2 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 borderStyle:(id)a4;
- (void).cxx_destruct;

@end
