@interface WARootScrollViewInfo : NSObject

@property (nonatomic) long long windowId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollFrame;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;

@end
