@class NSString;

@interface AWEUserWorkCellRightTopContainerComponent_NEWAPI : AWEUserWorkCellUniversalContainerComponent_NEWAPI <AWEUserWorkCellComponentAccessibilityProtocol>

@property (readonly, nonatomic) long long accessibilityPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)imageSizeAdaptiveBigModeWithContext:(id)a0;

- (id)buildVirtualView:(id)a0;
- (void)bindEvents;
- (id)subComponentClassNames;
- (id)accessibilityLabel;
- (id)initWithData:(id)a0 context:(id)a1;

@end
