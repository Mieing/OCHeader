@class UIColor, NSArray;

@interface WNSearchCoverInfo : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endRect;
@property (retain, nonatomic) UIColor *coverColor;
@property (retain, nonatomic) NSArray *subCoverInfoList;

- (id)init;
- (void).cxx_destruct;

@end
