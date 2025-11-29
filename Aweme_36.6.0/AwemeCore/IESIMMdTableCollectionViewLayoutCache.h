@class NSArray;

@interface IESIMMdTableCollectionViewLayoutCache : NSObject

@property (copy, nonatomic) NSArray *cellsWidth;
@property (copy, nonatomic) NSArray *cellsHeight;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGSize { double width; double height; } boundSize;

- (void).cxx_destruct;

@end
