@class UIColor, NSArray, UIView, NSMutableArray;

@interface IESLivePanelConfiguration : NSObject

@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) double maxHeight;
@property (retain, nonatomic) Class cellClassForItem;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL shouldApplyCornerRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) double itemSpacing;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) double pageOffset;
@property (retain, nonatomic) NSMutableArray *scrollEnableForSection;
@property (nonatomic) BOOL sectionable;
@property (nonatomic) unsigned long long toolarItemsPerRow;
@property (nonatomic) BOOL useStandardPanel;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *referenceSizeForHeaderInSection;
@property (retain, nonatomic) NSArray *referenceSizeForFooterInSection;
@property (retain, nonatomic) NSArray *insetForSection;
@property (retain, nonatomic) NSArray *minimumLineSpacingForSection;
@property (retain, nonatomic) NSArray *minimumInteritemSpacingForSection;
@property (nonatomic) double customAnimationDuration;
@property (copy, nonatomic) id /* block */ customShowAnimation;
@property (copy, nonatomic) id /* block */ customDismissAnimation;
@property (nonatomic) BOOL isForLynxLeftToolbar;
@property (nonatomic) BOOL needClip;
@property (copy, nonatomic) id /* block */ tapBackgroundInterceptor;
@property (nonatomic) long long morePanelAudienceStyle;
@property (copy, nonatomic) id /* block */ onShowStart;
@property (copy, nonatomic) id /* block */ onShowComplete;
@property (copy, nonatomic) id /* block */ onHideStart;
@property (copy, nonatomic) id /* block */ onHideComplete;

+ (id)primaryPanelConfiguration;
+ (id)minorPanelConfiguration;
+ (id)minorPanelLandscapeConfiguration;
+ (id)clearConfiguration;

- (void).cxx_destruct;

@end
