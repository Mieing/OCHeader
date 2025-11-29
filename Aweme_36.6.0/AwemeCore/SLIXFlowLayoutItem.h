@class IESECSliceXElement;

@interface SLIXFlowLayoutItem : NSObject

@property (retain, nonatomic) IESECSliceXElement *element;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;

@end
