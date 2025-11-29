@interface AWEIMMessageTabMultiTabConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL isMultiTab;
@property (nonatomic) BOOL addEmptyViewToChatListTableView;
@property (nonatomic) BOOL shouldDisableCellSwipeAction;
@property (nonatomic) BOOL shouldForceEnableLongPressGestureForIMChatListCells;
@property (nonatomic) BOOL isHeaderFixedInMessageTab;
@property (nonatomic) BOOL shouldPinIndexView;
@property (nonatomic) unsigned long long indicatorViewStyle;
@property (nonatomic) BOOL shouldHideIndexerLine;
@property (nonatomic) long long tabSkeletonCellSwipeType;
@property (nonatomic) BOOL campaignShouldUpdateFakeNavBar;

+ (id)configWithStyle:(unsigned long long)a0;

@end
