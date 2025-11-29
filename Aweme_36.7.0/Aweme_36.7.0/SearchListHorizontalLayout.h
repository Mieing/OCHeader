@interface SearchListHorizontalLayout : SearchListLayout

@property (nonatomic) BOOL enableLayoutFix;
@property (nonatomic) double leftMargin;
@property (nonatomic) double itemSpace;
@property (nonatomic) double preferItemWidth;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (long long)scrollDirection;

@end
