@class NSArray, NSString;

@interface EmoticonBoardCrossCollectionStoreGridCellModel : NSObject

@property (nonatomic) unsigned long long row;
@property (nonatomic) double intervalX;
@property (nonatomic) double intervalY;
@property (nonatomic) double edgeLeft;
@property (nonatomic) double edgeTop;
@property (nonatomic) double totalHeight;
@property (nonatomic) unsigned long long column;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (retain, nonatomic) NSArray *emoticonWrapArray;
@property (nonatomic) BOOL darkMode;
@property (retain, nonatomic) NSString *packageId;
@property (nonatomic) double totalWidth;

- (id)init;
- (void)genWholeModel;
- (void).cxx_destruct;

@end
