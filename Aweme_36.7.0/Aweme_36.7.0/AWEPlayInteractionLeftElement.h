@class NSString;

@interface AWEPlayInteractionLeftElement : AWEPlayInteractionBaseElement <AWEBaseElementCustomPaddingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double leftContainerWidth;
@property (nonatomic) BOOL responsiveLayout;
@property (nonatomic) double dynamicWidthMultiply;
@property (nonatomic) double dynamicWidthOffset;

- (id)paddingOfPreviousElement:(id)a0;
- (id)paddingOfNextElement:(id)a0;
- (double)leftContainerWidthBeforeLayoutFinish;
- (void)viewDidLoad;
- (unsigned long long)elementPosition;

@end
