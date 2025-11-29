@interface EmoticonBoardUIHelper : MMObject

+ (long long)calculateColumnCountForItemWidth:(double)a0 IntervalX:(double)a1 totalWidth:(double)a2;
+ (long long)calculateRowCountForItemHeight:(double)a0 IntervalY:(double)a1 totalHeight:(double)a2;
+ (double)calculateEdgeLeftForColumnCount:(long long)a0 itemWidth:(double)a1 intervalX:(double)a2 totalWidth:(double)a3;
+ (double)calculateEdgeTopForRowCount:(long long)a0 itemHeight:(double)a1 intervalY:(double)a2 totalHeight:(double)a3;

@end
