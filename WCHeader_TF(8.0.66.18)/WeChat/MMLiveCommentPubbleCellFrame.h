@class NSString, NSArray, MMLiveTaskId, NSMutableDictionary, MMLiveCommentDataItem, MMLiveCommentPubbleCellFrameExtraConfig, MMLiveBaseTask, NSNumber;
@protocol MMLiveCommentPubbleCellFrameChangeDelegate;

@interface MMLiveCommentPubbleCellFrame : NSObject

@property (nonatomic) BOOL isBarrageItem;
@property (retain, nonatomic) NSNumber *contentLineNumberForMsgTypeUser;
@property (retain, nonatomic) NSNumber *maxWidthNumForMsgTypeUser;
@property (retain, nonatomic) NSString *layoutIdentityKey;
@property (nonatomic) double layoutStandardWidth;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (nonatomic) struct CGSize { double width; double height; } cellSizePortrait;
@property (nonatomic) struct CGSize { double width; double height; } cellSizeLandscape;
@property (nonatomic) BOOL isContentExpand;
@property (readonly, nonatomic) BOOL supportContentExpand;
@property (weak, nonatomic) id<MMLiveCommentPubbleCellFrameChangeDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *cellSizeDict;
@property (retain, nonatomic) NSMutableDictionary *cellExpandSizeDict;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } nickNameSize;
@property (nonatomic) struct CGSize { double width; double height; } nickNameSizePortrait;
@property (nonatomic) struct CGSize { double width; double height; } nickNameSizeLandscape;
@property (retain, nonatomic) NSMutableDictionary *nickNameSizeDict;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) struct CGSize { double width; double height; } contentSizePortrait;
@property (nonatomic) struct CGSize { double width; double height; } contentSizeLandscape;
@property (retain, nonatomic) NSMutableDictionary *contentSizeDict;
@property (retain, nonatomic) NSMutableDictionary *contentExpandSizeDict;
@property (readonly, nonatomic) NSArray *contentArrStyles;
@property (retain, nonatomic) NSArray *contentArrStylesPortrait;
@property (retain, nonatomic) NSArray *contentArrStylesLandscape;
@property (retain, nonatomic) NSMutableDictionary *contentArrStylesDict;
@property (retain, nonatomic) NSMutableDictionary *contentExpandArrStylesDict;
@property (readonly, nonatomic) NSArray *nickArrStyles;
@property (retain, nonatomic) NSArray *nickArrStylesPortrait;
@property (retain, nonatomic) NSArray *nickArrStylesLandscape;
@property (retain, nonatomic) NSMutableDictionary *nickArrStylesDict;
@property (nonatomic) struct CGSize { double width; double height; } signSize;
@property (retain, nonatomic) NSArray *signArrStyles;
@property (nonatomic) unsigned long long pubbleUIType;
@property (retain, nonatomic) MMLiveCommentDataItem *commentItem;
@property (nonatomic) struct CGPoint { double x; double y; } cellOrigin;
@property (nonatomic) double firstLineOriginX;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveBaseTask *liveTask;
@property (nonatomic) double changeBGColorOffset;
@property (nonatomic) double offsetWhenReuse;
@property (nonatomic) double topSectionOffset;
@property (retain, nonatomic) MMLiveCommentPubbleCellFrameExtraConfig *extraConfig;

+ (id)createTextView;

- (id)initWithTaskId:(id)a0;
- (long long)layoutResult;
- (BOOL)isCurrentLayouted;
- (void)calculateIfNeeded;
- (BOOL)isUserTableStyle;
- (BOOL)isCombleTableStyle;
- (double)commmentTableWidth;
- (id)getCurrentUIStateInfo;
- (id)getDisplayStr:(id)a0;
- (id)getNickNameStr:(id)a0;
- (void)calculateWithCommentInfo:(id)a0;
- (void)caculateSizeForComment:(id)a0;
- (void)transferToPubbleUIType:(id)a0;
- (BOOL)isCommentContentMultiline;
- (id)getLayoutIdentifyKeyWithStandardWidth:(double)a0;
- (id)getCommentTextAttributeObj:(id)a0;
- (void).cxx_destruct;

@end
