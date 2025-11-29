@class MMFinderLiveSubTitleData, NSString, NSArray, UIFont, TextStyleAttributeObj, NSMutableArray;

@interface MMFinderLiveSubTitleDisplayModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSArray *contentArrStyles;
@property (nonatomic) double currentMaxContentHeight;
@property (nonatomic) long long currentMaxLines;
@property (nonatomic) unsigned long long currentUpdateResult;
@property (nonatomic) unsigned long long previousUpdateType;
@property (nonatomic) unsigned long long currentUpdateType;
@property (nonatomic) unsigned long long currentSplicingStyle;
@property (nonatomic) long long lastSubTitleLineIndex;
@property (retain, nonatomic) NSMutableArray *currSubTitleList;
@property (readonly, nonatomic) MMFinderLiveSubTitleData *currentSubTitle;
@property (nonatomic) BOOL needForceRefreshUI;
@property (nonatomic) long long subTitleType;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long maxLineNum;
@property (nonatomic) unsigned long long maxDisplayLineNum;
@property (nonatomic) double maxContentWidth;
@property (retain, nonatomic) TextStyleAttributeObj *textStyleAttribute;
@property (nonatomic) unsigned long long staticSplicingStyle;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) BOOL needUpdate;

+ (id)getContentWithArrStyles:(id)a0;
+ (id)createDisplayContent:(id)a0 splicingStyle:(unsigned long long)a1;
+ (BOOL)isSubTitleStartLineIndexValid:(long long)a0;
+ (BOOL)isSubTitleStartOffsetXValid:(double)a0;
+ (id)getSplicingSpaceDivision;

- (BOOL)updateSubTitleDatas:(id)a0;
- (BOOL)forceRefreshUI;
- (BOOL)forceRefreshUIIfNeeded;
- (id)getContentArrStylesAtLine:(unsigned long long)a0;
- (id)getContentArrStylesInLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)getDisplayContentArrStyles;
- (void)tagNeedForceRefreshUI;
- (void)updateSubTitleList:(id)a0;
- (void)refreshUI;
- (BOOL)checkSubTitleListCountUpdated:(id)a0;
- (BOOL)checkSubTitleListIndexUpdated:(id)a0;
- (BOOL)checkSubTitleListContentUpdated:(id)a0;
- (id)getDisplayContent:(id)a0;
- (void)preUpdateCurrentSplicingStyle:(id)a0 checkLastSubTitleEndLineIndex:(long long *)a1 checkNewSubTitleStartLineIndex:(long long *)a2 checkNewSubTitleStartOffsetX:(double *)a3;
- (struct { long long x0; double x1; })getNewSubTitleLayoutPositionWithStartLineIndex:(long long)a0 startOffsetX:(double)a1 splicingMarkLineIndex:(long long)a2 splicingMarkOffsetX:(double)a3 splicingStyle:(unsigned long long)a4;
- (void)checkFirstCharAfterSubTitleMarkPosition:(id)a0 lineIndex:(long long *)a1 offsetX:(double *)a2;
- (void)checkSplicingMarkPosition:(id)a0 lineIndex:(long long *)a1 offsetX:(double *)a2;
- (void)updateCurrSubTitleStartOffsetX:(double)a0;
- (void)updateCurrSubTitleStartLineIndex:(long long)a0;
- (void)clearAllSubTitleLayoutDatas;
- (void).cxx_destruct;

@end
