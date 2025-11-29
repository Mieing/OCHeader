@class UIColor, NSString, UIFont, UIImage;

@interface __RTVCustomPopoverSheetActionCellModel : __RTVCustomPopoverSheetBaseCellModel

@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL enableSwitch;
@property (readonly, nonatomic) BOOL switchOn;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) BOOL needDivider;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ switchBlock;

- (id)getInKey;
- (id)initWithImage:(id)a0 title:(id)a1 handler:(id /* block */)a2;
- (id)initWithImage:(id)a0 title:(id)a1 switchValue:(BOOL)a2 handler:(id /* block */)a3;
- (void)invokeSelectAction;
- (void).cxx_destruct;
- (double)preferredHeight;

@end
