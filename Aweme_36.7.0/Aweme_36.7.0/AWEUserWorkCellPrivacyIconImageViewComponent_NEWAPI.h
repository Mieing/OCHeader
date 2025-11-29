@class AWERLVirtualImageView, NSString;

@interface AWEUserWorkCellPrivacyIconImageViewComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } absoluteLayoutStyle;
@property (retain, nonatomic) AWERLVirtualImageView *privacyIconImageVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPostWorkViewControllerAdapterClass;
+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (id)aAWEPostWorkViewControllerAdapter;
- (BOOL)dynamicComponent;
- (long long)accessibilityPriority;
- (double)imageWidthAdaptiveBigMode;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;

@end
