@interface BDXCategoryIndicatorParamsModel : NSObject

@property (nonatomic) long long selectedIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectedCellFrame;
@property (nonatomic) long long leftIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftCellFrame;
@property (nonatomic) long long rightIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightCellFrame;
@property (nonatomic) double percent;
@property (nonatomic) long long lastSelectedIndex;
@property (nonatomic) unsigned long long selectedType;

@end
