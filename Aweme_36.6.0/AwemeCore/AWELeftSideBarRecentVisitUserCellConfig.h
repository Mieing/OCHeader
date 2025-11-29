@class NSString, UIFont;
@protocol AWELeftSideBarItemContext;

@interface AWELeftSideBarRecentVisitUserCellConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) long long oneLineUsersLimit;
@property (nonatomic) long long moduleQuitUsers;
@property (nonatomic) long long maxShowLimit;
@property (nonatomic) long long realMaxShowLimit;
@property (nonatomic) long long numberOfColumns;
@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (nonatomic) long long cellHeight;
@property (nonatomic) long long maxLineVisible;
@property (nonatomic) double cellHorizontalPadding;
@property (nonatomic) double cellHorizontalGap;
@property (nonatomic) double cellTopPadding;
@property (nonatomic) double cellBottomPadding;
@property (nonatomic) double cellVerticalGap;
@property (nonatomic) double cellImageWidth;
@property (nonatomic) double cellImageTopPadding;
@property (nonatomic) double cellImageCornerRadius;
@property (nonatomic) double cellImageGapWidth;
@property (nonatomic) BOOL cellImageHasBorderLine;
@property (retain, nonatomic) UIFont *cellTitleFont;
@property (nonatomic) double cellTitleWidth;
@property (nonatomic) double cellTitleHeight;
@property (nonatomic) double cellBadgeSize;
@property (nonatomic) BOOL cellBadgeBackground;
@property (nonatomic) double cellBadgeBackgroundSize;
@property (nonatomic) double headerHeight;
@property (nonatomic) BOOL headerBottomLine;
@property (retain, nonatomic) UIFont *headerTitleFont;
@property (nonatomic) double headerTitleHeight;
@property (nonatomic) double headerTitleTopPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
