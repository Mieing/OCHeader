@class UIFont, NSString, MMFinderLiveBarragePubbleCellFrameResult, MMFinderLiveBarrageDataItem, NSMutableArray;

@interface MMFinderLiveBarragePubbleCellFrame : NSObject

@property (retain, nonatomic) MMFinderLiveBarrageDataItem *barrageDataItem;
@property (retain, nonatomic) MMFinderLiveBarragePubbleCellFrameResult *layoutResult;
@property (nonatomic) unsigned long long currLayoutStyle;
@property (readonly, nonatomic) BOOL isInBrightStyle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) NSMutableArray *arrStyles;
@property (readonly, nonatomic) double firstLineOriginX;
@property (readonly, nonatomic) unsigned long long contentMaxLineNum;
@property (readonly, nonatomic) double contentLeft;
@property (readonly, nonatomic) double contentTop;
@property (readonly, nonatomic) double startIconLeft;
@property (readonly, nonatomic) double startIconTop;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } startIconSize;
@property (readonly, nonatomic) double startIconContentDis;
@property (readonly, nonatomic) UIFont *labelFont;
@property (readonly, nonatomic) BOOL isContentMultiline;
@property (readonly, nonatomic) NSString *displayStr;
@property (nonatomic) int lastExposeIndex;

- (id)initWithBarrageDataItem:(id)a0 inBrightStyle:(BOOL)a1;
- (void)calculate;
- (void)updateLayoutStyle:(int)a0;
- (BOOL)isSingleLine;
- (void)calculateSizeWithBarrageDataItem:(id)a0;
- (long long)getCurrentLines:(id)a0;
- (double)getLastLineMaxY:(id)a0;
- (void).cxx_destruct;

@end
