@interface WCFinderHeadInfoViewLayout : NSObject

@property (nonatomic) double leftMargin;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double downOffset;
@property (nonatomic) double upOffset;
@property (nonatomic) long long fontSize;
@property (nonatomic) long long smallFontSize;
@property (nonatomic) long long currentFontSize;

- (id)init;
- (id)initWithLeftMargin:(double)a0;
- (id)initWithLeftMargin:(double)a0 Size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithLeftMargin:(double)a0 UpOffset:(double)a1 DownOffset:(double)a2;

@end
