@class BDReaderLineInfo;

@interface BDReaderLineRectItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) BDReaderLineInfo *lineInfo;

- (void).cxx_destruct;

@end
