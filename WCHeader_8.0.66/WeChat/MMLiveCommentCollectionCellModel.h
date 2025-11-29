@class NSArray, NSMutableArray, UICollectionView;

@interface MMLiveCommentCollectionCellModel : NSObject

@property (readonly, nonatomic) double cellHeight;
@property (retain, nonatomic) NSArray *commentDataArr;
@property (nonatomic) double cellWidth;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL needPefixSpace;
@property (nonatomic) BOOL ignoreLastLineSpace;
@property (nonatomic) BOOL isCellFrameMarginBottomWhenOnly;
@property (retain, nonatomic) NSMutableArray *firstShortPubbleCellFrameArr;
@property (retain, nonatomic) NSMutableArray *secondShortPubbleCellFrameArr;
@property (retain, nonatomic) NSMutableArray *firstLongPubbleCellFrameArr;
@property (retain, nonatomic) NSMutableArray *secondLongPubbleCellFrameArr;
@property (retain, nonatomic) NSMutableArray *officialPubbleCellFrameArr;
@property (retain, nonatomic) NSMutableArray *mostLikePubbleCellFrameArr;
@property (retain, nonatomic) NSMutableArray *lastAppendShortPubbleCellFrameArr;
@property (retain, nonatomic) NSMutableArray *lastAppendLongPubbleCellFrameArr;
@property (retain, nonatomic) NSMutableArray *touchCellFrameArr;
@property (readonly, nonatomic) unsigned long long commentCount;
@property (nonatomic) long long cellType;
@property (nonatomic) unsigned long long index;

- (id)initWithCellWidth:(double)a0 inCollectionView:(id)a1;
- (void)initCommentData:(id)a0;
- (void)createCommentPubbleCellFrames;
- (void)appendCommentPubbleCellFrame:(id)a0;
- (void)appendShortCellFrame:(id)a0;
- (void)appendLongCellFrame:(id)a0;
- (void)appendOfficialCellFrame:(id)a0;
- (void)appendMostLikeCellFrame:(id)a0;
- (void)updateCellFrameOriginY;
- (BOOL)isOnlyPubbleCellBottom;
- (unsigned long long)allPubbleCount;
- (void)initTouchCellFrameArr;
- (void)addTouchCellFrameFrom:(id)a0;
- (void)initCellWidth;
- (double)pubbleCellStandardHeightAndSpace;
- (double)getFirstCellFrameOriginX;
- (double)currentMaxFirstCellFrameOriginX;
- (BOOL)isCellFrameUserType:(id)a0;
- (BOOL)isCellFrameOfficelOrAnchorType:(id)a0;
- (BOOL)isCellFrameMostLikeType:(id)a0;
- (BOOL)isCommentShort:(id)a0;
- (void)handleTouchHitOnLocation:(struct CGPoint { double x0; double x1; })a0 callBack:(id /* block */)a1;
- (void).cxx_destruct;

@end
