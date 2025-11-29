@class UIColor, NSString, UIImage, UIPanGestureRecognizer;

@interface AWEIMEmoticonPanelUIConfig : NSObject

@property (nonatomic) long long containerViewType;
@property (nonatomic) BOOL showStoreEntry;
@property (nonatomic) long long fixedFirstTab;
@property (nonatomic) BOOL initialVerticalAlignmentCenter;
@property (nonatomic) BOOL hideTabView;
@property (retain, nonatomic) UIPanGestureRecognizer *panelDragGes;
@property (nonatomic) double draggableHeight;
@property (nonatomic) struct CGSize { double width; double height; } tabItemSize;
@property (nonatomic) BOOL shouldNotChangeBgColor;
@property (nonatomic) BOOL showRecentlyUsedLittleEmoticons;
@property (nonatomic) unsigned long long btnConfig;
@property (copy, nonatomic) NSString *sendBtnTitle;
@property (nonatomic) double scaleFactor;
@property (retain, nonatomic) UIImage *placeholder;
@property (retain, nonatomic) UIColor *tabBackgroundColor;
@property (retain, nonatomic) UIColor *tabSelectedColor;
@property (retain, nonatomic) UIColor *horizontalDividerColor;
@property (retain, nonatomic) UIColor *panelBackgroundColor;

- (void).cxx_destruct;
- (id)init;

@end
