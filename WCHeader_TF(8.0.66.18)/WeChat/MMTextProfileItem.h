@interface MMTextProfileItem : NSObject

@property (nonatomic) unsigned long long sid;
@property (nonatomic) int errorW;
@property (nonatomic) int errorH;
@property (nonatomic) int ratio;
@property (nonatomic) float statisticsRatio;
@property (nonatomic) float pointSize;
@property (nonatomic) struct MMTextLayoutParam { struct CGSize { double width; double height; } size; unsigned long long lineBreakStrategy; long long lineBreak; } param;
@property (nonatomic) int type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
