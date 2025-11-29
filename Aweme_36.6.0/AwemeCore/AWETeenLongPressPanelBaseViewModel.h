@class UIColor, NSString, UIImage, UIView, AWETeenLongPressPanelContext;
@protocol AWETeenLongPressPanelDelegate;

@interface AWETeenLongPressPanelBaseViewModel : NSObject

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSString *describeString;
@property (retain, nonatomic) NSString *duxIconName;
@property (retain, nonatomic) UIColor *duxIconColor;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) AWETeenLongPressPanelContext *context;
@property (nonatomic) BOOL showSelected;
@property (retain, nonatomic) NSString *describeSelectedString;
@property (retain, nonatomic) NSString *duxIconSelectedName;
@property (retain, nonatomic) UIColor *duxIconSelectedColor;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIView *rightSubview;
@property (nonatomic) struct CGSize { double width; double height; } rightSubviewSize;
@property (nonatomic) double rightPadding;
@property (copy, nonatomic) id /* block */ willAppearBlock;
@property (weak, nonatomic) id<AWETeenLongPressPanelDelegate> delegate;

- (void)dismissPanel;
- (id)getCommonSwitch;
- (id)getCommonSegmentWithItems:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
