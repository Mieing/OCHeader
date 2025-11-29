@class NSArray;

@interface IESECGoodsDetailHeaderState : NSObject

@property (nonatomic) BOOL shouldDisableAnimatedWhenIndexChange;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long optimizeCellIndex;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) double percent;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL isSmallMode;
@property (nonatomic) unsigned long long containerStyle;
@property (nonatomic) BOOL isPreviewMode;
@property (copy, nonatomic) NSArray *cellsModelList;
@property (nonatomic) unsigned long long videoState;
@property (nonatomic) double contentScrollOffset;
@property (nonatomic) BOOL isDefaultHideCellExpand;

- (void).cxx_destruct;

@end
