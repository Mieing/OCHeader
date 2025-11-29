@class UIFont, NSString, UIColor, NSAttributedString;

@interface DUXPopoverLabel : NSObject <DUXPopoverContent>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double verticalPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (id)duxPopover_view:(id)a0;
- (id)initWithText:(id)a0 textFont:(id)a1 textColor:(id)a2;
- (void).cxx_destruct;
- (id)initWithAttributedText:(id)a0;

@end
