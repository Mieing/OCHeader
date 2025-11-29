@class NSArray, NSValue, WCFinderTagListViewOptions, NSMutableArray;

@interface WCFinderTagListViewLayout : NSObject

@property (retain, nonatomic) NSMutableArray *layoutItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandBtnFrame;
@property (nonatomic) BOOL dirty;
@property (nonatomic) long long oldExpandBtnStyle;
@property (retain, nonatomic) NSValue *expandBtnSizeValue;
@property (retain, nonatomic) WCFinderTagListViewOptions *options;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (nonatomic) BOOL isExpand;

+ (id)displayTitle:(id)a0 withLimitCharCount:(long long)a1;

- (id)init;
- (struct CGSize { double x0; double x1; })calculateTextSize:(id)a0;
- (void)markDirty;
- (void)doLayout;
- (void)enumerateLayout:(id /* block */)a0;
- (void)updateCloseBtnSize;
- (struct CGSize { double x0; double x1; })expandBtnSize;
- (void).cxx_destruct;

@end
