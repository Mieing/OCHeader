@class UIColor, NSString, UIView, RichTextView;
@protocol WCFinderTabViewDelegate;

@interface WCFinderTabView : UIView <WCFinderTabViewProtocol>

@property (retain, nonatomic) RichTextView *titleView;
@property (copy, nonatomic) NSString *bindPath;
@property (retain, nonatomic) UIView *redDotView;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) double fWidth;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) BOOL useAutoFitTitleStrategy;
@property (nonatomic) BOOL redDotDoesNotOccupyWidth;
@property (weak, nonatomic) id<WCFinderTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)setTitleText:(id)a0;
- (void)sizeToFit;
- (void)updateForState:(unsigned long long)a0;
- (void)setBindRedDotPath:(id)a0;
- (void)setRedDotString:(id)a0;
- (void)clearRedDotView;
- (void)finderRedDotDataChangedWithPathKey:(id)a0;
- (void)processRedDotView;
- (void).cxx_destruct;

@end
