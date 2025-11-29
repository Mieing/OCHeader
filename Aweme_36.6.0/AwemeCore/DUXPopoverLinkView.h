@class NSString, UIImage, UIColor;

@interface DUXPopoverLinkView : NSObject <IESIMPopoverContent, DUXPopoverContent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *iconTintColor;
@property (retain, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (id)duxPopover_view:(id)a0;
- (id)iesim_popoverView;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 icon:(id)a1;

@end
