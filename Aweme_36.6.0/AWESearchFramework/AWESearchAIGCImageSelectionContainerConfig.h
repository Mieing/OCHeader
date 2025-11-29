@class NSArray;

@interface AWESearchAIGCImageSelectionContainerConfig : NSObject

@property (nonatomic) BOOL isSmallType;
@property (nonatomic) BOOL enableClickSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (copy, nonatomic) NSArray *boxArray;
@property (nonatomic) long long selectedIndex;

- (void).cxx_destruct;

@end
