@class AWEProfileExtensionAreaContainer_New, AWEProfileHeaderContext, NSString;

@interface AWEProfileHeaderProvidedServiceSectionViewModel : AWEBaseListSectionViewModel <AWEProfileProvidedServiceSectionHeightUpdateSubscriber, AWEProfileHeaderSectionViewModelProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) double sectionTopPadding;
@property (nonatomic) double additionalHeight;
@property (readonly, nonatomic) double footerHeight;
@property (retain, nonatomic) AWEProfileExtensionAreaContainer_New *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void)sectionUpdateAdditionalHeight:(double)a0 animated:(BOOL)a1;
- (void)sectionResetHeight;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
