@class UIColor, NSString;

@interface AWESwitchRecordModeViewConfig : NSObject <AWESwitchRecordModeViewConfigStudioProxy>

@property (nonatomic) double cellSpace;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *lightNormalColor;
@property (retain, nonatomic) UIColor *lightSelectedColor;
@property (nonatomic) long long fontWeight;
@property (nonatomic) long long unSelectedFontWeight;
@property (nonatomic) BOOL addShadow;
@property (nonatomic) BOOL enableSelectWhenScroll;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (nonatomic) long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
