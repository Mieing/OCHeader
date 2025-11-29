@class NSString;

@interface ACCSequencePreviewViewConfig : NSObject

@property (copy, nonatomic) NSString *cellIdentifier;
@property (copy, nonatomic) Class cellClass;
@property (nonatomic) double maxWidth;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double cellHighlightedScale;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double horizonalInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } draggableInset;
@property (nonatomic) BOOL isFromNewPreviewPostPage;
@property (nonatomic) double addButtonCornerRadius;
@property (nonatomic) BOOL hiddenAddButton;
@property (nonatomic) unsigned long long addButtonStyle;
@property (nonatomic) BOOL disableLongAndPanGesture;
@property (nonatomic) BOOL isLightTheme;
@property (nonatomic) BOOL isFromEditPage;
@property (nonatomic) unsigned long long editPageStyle;

- (void).cxx_destruct;

@end
