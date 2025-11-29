@class NSArray, BDReaderLineInfo;

@interface BDReaderLineItem : NSObject

@property (retain, nonatomic) NSArray *rects;
@property (retain, nonatomic) BDReaderLineInfo *lineInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutRect;

- (void).cxx_destruct;

@end
