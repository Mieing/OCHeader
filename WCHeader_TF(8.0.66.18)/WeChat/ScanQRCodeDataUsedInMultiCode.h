@interface ScanQRCodeDataUsedInMultiCode : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } curRelatedRect;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL isClipImage;
@property (nonatomic) struct CGPoint { double x; double y; } normalLongPressPoint;

- (void).cxx_destruct;

@end
