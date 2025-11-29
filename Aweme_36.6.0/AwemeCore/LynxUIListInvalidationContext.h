@class NSArray, NSDictionary, NSString, LynxUIListScrollThresholds, NSNumber;

@interface LynxUIListInvalidationContext : NSObject

@property (retain, nonatomic) NSArray *removals;
@property (retain, nonatomic) NSArray *insertions;
@property (retain, nonatomic) NSArray *moveFrom;
@property (retain, nonatomic) NSArray *moveTo;
@property (retain, nonatomic) NSArray *updateTo;
@property (retain, nonatomic) NSArray *updateFrom;
@property (retain, nonatomic) NSDictionary *updates;
@property (retain, nonatomic) NSDictionary *estimatedHeights;
@property (retain, nonatomic) NSArray *fullSpanItems;
@property (retain, nonatomic) NSArray *stickyTopItems;
@property (retain, nonatomic) NSArray *stickyBottomItems;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) double mainAxisGap;
@property (nonatomic) double crossAxisGap;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) BOOL needsInternalCellAppearNotification;
@property (nonatomic) BOOL needsInternalCellDisappearNotification;
@property (nonatomic) BOOL needsInternalCellPrepareForReuseNotification;
@property (nonatomic) long long listUpdateType;
@property (retain, nonatomic) NSNumber *needsVisibleCells;
@property (nonatomic) long long scrollToPosition;
@property (nonatomic) BOOL smooth;
@property (retain, nonatomic) NSString *alignTo;
@property (nonatomic) double offset;
@property (nonatomic) long long initialScrollIndex;
@property (retain, nonatomic) LynxUIListScrollThresholds *scrollThresholds;

- (id)initWithModelUpdates:(id)a0;
- (id)initWithInitialScrollIndex:(long long)a0;
- (id)initWithBoundsChange;
- (id)initWithGeneralPropsUpdate;
- (id)initWithScrollThresholdsUpdate:(id)a0;
- (id)initWithScrollToInfo:(long long)a0 offset:(double)a1 alignTo:(id)a2 smooth:(BOOL)a3;
- (void).cxx_destruct;

@end
