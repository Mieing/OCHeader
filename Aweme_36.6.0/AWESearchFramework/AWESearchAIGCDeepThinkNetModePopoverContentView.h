@class NSString;

@interface AWESearchAIGCDeepThinkNetModePopoverContentView : UIView <DUXPopoverContent>

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (id)initWithNetModeList:(id)a0 currentType:(long long)a1 selectCallback:(id /* block */)a2 styleConfig:(id)a3;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
