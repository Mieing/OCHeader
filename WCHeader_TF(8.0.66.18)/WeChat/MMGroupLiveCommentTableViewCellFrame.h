@class NSArray;

@interface MMGroupLiveCommentTableViewCellFrame : MMLiveCommentTableViewCellFrame {
    long long _layoutResult;
}

@property (nonatomic) struct CGSize { double width; double height; } pubbleSizePortrait;
@property (nonatomic) struct CGSize { double width; double height; } pubbleSizeLandscape;
@property (nonatomic) double cellHeightPortrait;
@property (nonatomic) double cellHeightLandscape;
@property (retain, nonatomic) NSArray *arrStylesPortrait;
@property (retain, nonatomic) NSArray *arrStylesLandscape;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pubbleSize;
@property (readonly, nonatomic) NSArray *arrStyles;

- (void)calculateWithCommentInfo:(id)a0 isLastLine:(BOOL)a1;
- (BOOL)calculateIfNeeded;
- (void)calculateSizeWithComment:(id)a0 isPortrait:(BOOL)a1;
- (void)resetCellFrame;
- (double)cellHeight;
- (double)currCellHeight;
- (void).cxx_destruct;

@end
