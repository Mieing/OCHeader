@class AWELifeFeedsBaseComponentVM, NSString, NSArray, NSMutableArray;

@interface AWELifeFeedsNodeRuntimeState : NSObject

@property (nonatomic) double maxHeight;
@property (retain, nonatomic) NSMutableArray *columnList;
@property (copy, nonatomic) NSString *superNodeTag;
@property (copy, nonatomic) NSArray *subNodeTagList;
@property (copy, nonatomic) NSArray *componentTagList;
@property (weak, nonatomic) AWELifeFeedsBaseComponentVM *componentViewModel;
@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL isFullRow;
@property (nonatomic) BOOL isLife;
@property (nonatomic) BOOL isRight;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long indexOfColumn;

- (id)appendSubBlockNodeSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })nextItemOrigin;
- (void)resetLayout:(long long)a0;
- (void).cxx_destruct;
- (void)endLayout;

@end
