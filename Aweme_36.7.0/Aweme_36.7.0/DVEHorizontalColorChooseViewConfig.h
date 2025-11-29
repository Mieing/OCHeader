@class NSString;

@interface DVEHorizontalColorChooseViewConfig : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) BOOL cellIsAccessibility;
@property (retain, nonatomic) NSString *cellIdentifier;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;

- (void).cxx_destruct;

@end
