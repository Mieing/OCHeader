@class DUXPopover, NSString, AWEPopoverActionSheet, NSMutableArray, UIView;

@interface AWEACCPopoverActionSheetImpl : NSObject <AWEACCPopoverActionSheetProtocol>

@property (retain, nonatomic) AWEPopoverActionSheet *sheet;
@property (retain, nonatomic) DUXPopover *duxPopover;
@property (retain, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAlignmentModel:(long long)a0;
- (void)addActionWithTitle:(id)a0 handler:(id /* block */)a1;
- (void)addActionWithImage:(id)a0 title:(id)a1 titleColor:(id)a2 handler:(id /* block */)a3;
- (id)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 direction:(unsigned long long)a2;
- (void)dimiss;
- (void)setFixedContentWidth:(double)a0;
- (BOOL)isPopoverReplaceABTestOn;
- (unsigned long long)transDUXPopoverPosition:(unsigned long long)a0;
- (long long)transSheetStyle:(long long)a0;
- (unsigned long long)transSheetDirection:(unsigned long long)a0;
- (void)addActionWithImage:(id)a0 imagePosition:(unsigned long long)a1 title:(id)a2 titleColor:(id)a3 handler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)setColorMode:(long long)a0;
- (void)moveToFront;

@end
